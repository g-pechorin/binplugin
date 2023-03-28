using UnityEngine;
using System.Collections;

public class TurnItUpsideDown : MonoBehaviour
{
	private bool isAsset = true;

	void Update()
	{
		if (Input.GetButtonDown("Fire1"))
		{
			var replacement = OpenCV.LoadFromFile(64, Application.dataPath.Substring(0, Application.dataPath.LastIndexOf("/Assets")) + "/Smile.png");

			if (isAsset)
				isAsset = false;
			else
				Destroy(GetComponent<Renderer>().material.mainTexture);

			GetComponent<Renderer>().material.mainTexture = replacement;
		}
	}
}
