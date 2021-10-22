#include <iostream>
#include "MyConsoleGameEngine3D.h"

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


	//Create Instance
	MyConsoleGameEngine3D demo3D;

	demo3D.setShowShaded(true);
	demo3D.setShowWireFrame(false);	
	demo3D.setShiftObjInZ(6.0f);
	//demo3D.setFilename("VideoShip.obj");
	demo3D.setFilename("teapot.obj");


	if (demo3D.ConstructConsole(350, 350, 2, 2))
	{
		demo3D.Start();
	}
	return 0;



}
