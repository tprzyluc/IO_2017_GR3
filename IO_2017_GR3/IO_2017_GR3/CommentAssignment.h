#pragma once
#include<iostream>
#include"Zadanie.h"
#include"Tests.h"
#include <Windows.h>
#include <string>
#include <string.h>


void AssignmentTask(Zadanie* zadanie)
{
	if (test2_assign_task(zadanie) == 0)
	{


		//string kom_1 = "Reporter - " + task->reporter + "\n";
		//string kom_2 = "Assigne  - " + task->assigne + "\n";
		string mess = "Task has been  ASSIGNED \n";


		//int msgboxID = MessageBox(NULL, kom_1.c_str(), kom_2.c_str(), MB_ICONEXCLAMATION | MB_OK );
		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}
	else {

		//string kom_1 = "Reporter - " + task->reporter + "\n";
		//string kom_2 = "Assigne  - " + task->assigne + "\n";
		string mess = "Task has been not  ASSIGNED \n";


		//int msgboxID = MessageBox(NULL, kom_1.c_str(), kom_2.c_str(), MB_ICONEXCLAMATION | MB_OK );
		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}
}



