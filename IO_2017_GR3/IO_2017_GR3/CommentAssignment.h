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

void AssignmentTask2(Zadanie * zadanie)
{
	if (test2_assign_task(zadanie) == 4)
	{
		int s = zadanie->priorytet;


		string mess = "Task has been : ASSIGNED \n " + zadanie->owner + " assigned task nr " + to_string(zadanie->id_zadania) + " to " + zadanie->creator + "\n with description " + zadanie->opis + " with priority " + to_string(zadanie->priorytet);

		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}

	else {

		string mess = "Task has been not : ASSIGNED \n"+ zadanie->owner+" fail with assigned" ;

		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);
	}


}
