using UnityEngine;
using System.Collections;

public class TurnItUpsideDown : MonoBehaviour
{
	private bool isAsset = true;

	void Update()
	{
		if (Input.GetButtonDown("Fire1"))
		{
			// find the path to our project
			var path = Application.dataPath;

			// remove /Assets from the end of the path
			path = path.Substring(0, path.LastIndexOf("/Assets"));

			// add /Smile.png
			path += "/Smile.png";

			var replacement = OpenCV.LoadFromFile(64, path);

			if (isAsset)
				isAsset = false;
			else
				Destroy(GetComponent<Renderer>().material.mainTexture);

			GetComponent<Renderer>().material.mainTexture = replacement;
		}
	}
}
