#include <iostream>
#include "Tests.h"
#include "Task.h"
#include <Windows.h>
#include <string>
#include <string.h>


using namespace std;


void DeleteTask(Task *task)
{
	if (test2_delete_task(task) == 0)
	{


		//string kom_1 = "Reporter - " + task->reporter + "\n";
		//string kom_2 = "Assigne  - " + task->assigne + "\n";
		string mess = "Task has been deleted \n";
			
			
		//int msgboxID = MessageBox(NULL, kom_1.c_str(), kom_2.c_str(), MB_ICONEXCLAMATION | MB_OK );
		int msgboxID = MessageBox(NULL, mess.c_str(),NULL, MB_ICONEXCLAMATION | MB_OK);

	}
}