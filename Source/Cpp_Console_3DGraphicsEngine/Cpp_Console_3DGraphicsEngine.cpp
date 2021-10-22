#include "MyConsoleGameEngine3D.h"
#include <fstream>
#include <strstream>
#include <algorithm>
using namespace std;



int main()
{

	cout << "###########################################" << endl;
	cout << "#                                         #" << endl;
	cout << "#     C++ Console 3D Graphics Engine      #" << endl;
	cout << "#              MAA, 21.10.2021            #" << endl;
	cout << "#                                         #" << endl;
	cout << "###########################################" << endl;
	cout << endl << endl;


	MyConsoleGameEngine3D demo;
	demo.setShowWire(false);



	if (false)
	{
		demo.setFilename("obj_VideoShip.obj");
		demo.setInitialWindowOffset(10.0f);
		demo.setButtonSpeed(5.0f);
	}
	if (false)
	{
		demo.setFilename("obj_teapot.obj");
		demo.setInitialWindowOffset(10.0f);
		demo.setButtonSpeed(5.0f);
	}
	if (false)
	{
		demo.setFilename("obj_axis.obj");
		demo.setInitialWindowOffset(20.0f);
		demo.setButtonSpeed(10.0f);
	}

	if (true)
	{
		demo.setFilename("obj_mountains.obj");
		demo.setInitialWindowOffset(150.0f);
		demo.setButtonSpeed(20.0f);
	}


	if (demo.ConstructConsole(350, 350, 2, 2))
		demo.Start();

	return 0;
}


