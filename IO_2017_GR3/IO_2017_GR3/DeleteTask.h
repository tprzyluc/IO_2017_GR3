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
		string mess = "Task has been deleted \n";
		int msgboxID = MessageBox(NULL, mess.c_str(),NULL, MB_ICONEXCLAMATION | MB_OK);

	}
}
void DeleteTaskList(Task *task, int num_case)
{
	if (test1_delete_task(task,num_case) == 0)
	{
		string mess = "Tasks have been deleted \n";
		int msgboxID = MessageBox(NULL, mess.c_str(), NULL, MB_ICONEXCLAMATION | MB_OK);

	}
}