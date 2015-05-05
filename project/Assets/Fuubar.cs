
using UnityEngine;
using System.Collections;
using System;
using System.Runtime.InteropServices;

public class Fuubar : MonoBehaviour
{
	[DllImport("Foober")]
	private static extern float foo();

	public UnityEngine.UI.Text readout;

	void Start()
	{
		readout.text = ("foo() = " + foo());
	}
}
