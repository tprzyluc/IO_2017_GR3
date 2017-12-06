
#include "DeleteFromTask.h"
#include <iostream>
#include "Zadanie.h"
#include <string>
#include <string.h>
#include <Windows.h>



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

string DeleteFromTask::delete_task(Zadanie *&zadanie)
{
	cout << "Reporter: " << zadanie->owner << " Assigne:  " << zadanie->creator << endl;
	cout << " Zadanie " << zadanie->id_zadania << " zostalo usuniete " << endl;
	cout << "Opis: " << zadanie->opis << endl;

	string komunikat = " Zadanie zosta³o usuniête " + zadanie->id_zadania;

	return komunikat;
}

