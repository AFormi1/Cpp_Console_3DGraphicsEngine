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

	demo3D.setShowHiddenFaces(false);
	demo3D.setShowWireFrame(false);
	demo3D.setShowShaded(true);
	demo3D.setShiftObjInZ(8.0f);


	if (demo3D.ConstructConsole(300, 300, 2, 2))
	{

		demo3D.Start();
	}
	return 0;



}
