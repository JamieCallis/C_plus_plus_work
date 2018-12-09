#pragma once

#include "Module.h"
#include "Assessment.h"

using namespace std;

void main()
{
	Module *pMyModule = new Module("<<OO Programming>>");

	pMyModule->addCourseworks();
	pMyModule->addExam();

	cout << endl << "Module Mark = " << pMyModule->getMark() << endl;

	delete pMyModule;

	cout << endl << endl;
	system("pause");
};
