#pragma once
#include "Zadanie.h"
#include "DeleteFromTask.h"
#include"Task.h"

void test1_delete_task(Task *task)
{
	DeleteFromTask deleteFromTask;
	task->name = "Adam Kowalski";
	task->id = 0;

	//zadanie->print();
	//zadanie->~Zadanie();
	string komunikat = deleteFromTask.delete_task(task);
	deleteFromTask.print(komunikat);
	cout << "--------------------------------" << endl;
	//zadanie->print();
}
