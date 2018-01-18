#include"NotificationOfChange.h"

#include <string>
#include "Zadanie.h"
#include "Pracownik.h"
#include <iostream>
#include "Task.h"

using namespace std;

NotificationOfChange::NotificationOfChange()
{

}

string NotificationOfChange::change(Task *&zadanie)
{
	if (zadanie->updated != 0)
	{
		string komunikat, id, assigne, task, description;

		id = "Zmiana w zadaniu: " + zadanie->id;
		assigne = "\nAssigne: " + zadanie->assigne;
		task = "\nZadanie: " + zadanie->id;
		description = "\nOpis: " + zadanie->description;

		komunikat = id + assigne + task + description;

		return komunikat;
	}
	else
	{
		string komunikat = "Nie nastapila zmiana w zadaniu!";

		return komunikat;
	}

}
void NotificationOfChange::print(string komunikat)
{
	cout << komunikat << endl;
}
NotificationOfChange::~NotificationOfChange()
{

}