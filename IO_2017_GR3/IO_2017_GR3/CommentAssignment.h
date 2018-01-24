#pragma once
#include<iostream>
#include"Zadanie.h"
#include"Tests.h"
#include <Windows.h>
#include <string>
#include <string.h>


void AssignmentTask(Zadanie* zadanie)
{
	if (test1_assign_task(zadanie) == 0)
	{


		string mess = "Task has been  ASSIGNED \n";


		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}
	else {

		string mess = "Task has been not  ASSIGNED \n";

		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}
}



