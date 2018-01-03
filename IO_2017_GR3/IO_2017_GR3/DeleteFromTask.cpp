
#include "DeleteFromTask.h"
#include <iostream>
#include "Zadanie.h"
#include <string>
#include <string.h>
#include"Task.h"



using namespace std;



DeleteFromTask::DeleteFromTask()
{

}

void DeleteFromTask::print(string komunikat)
{
	cout << komunikat << endl;
}


DeleteFromTask::~DeleteFromTask()
{

}

string DeleteFromTask::delete_task(Task *&task)
{
	cout << "Assigne: " << task->name << endl;
	cout << " Zadanie " << task->id<< " zostalo usuniete " << endl;
	cout << "Opis: " << task->description << endl;

	string komunikat = " Zadanie zosta³o usuniête " + task->id;

	return komunikat;
}

