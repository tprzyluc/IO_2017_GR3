#pragma once
#include "Zadanie.h"
#include "DeleteFromTask.h"

void test1_delete_task(Zadanie *zadanie)
{
	DeleteFromTask deleteFromTask;
	zadanie->owner = "Adam Kowalski";
	zadanie->creator = "Jan Kowalski";
	zadanie->id_zadania = 0;

	zadanie->print();
	zadanie->~Zadanie();
	string komunikat = deleteFromTask.delete_task(zadanie);
	deleteFromTask.print(komunikat);
	cout << "--------------------------------" << endl;
	zadanie->print();
}
