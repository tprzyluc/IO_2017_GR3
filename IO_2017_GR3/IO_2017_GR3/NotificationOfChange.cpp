#include"NotificationOfChange.h"

#include"NotificationOfChange.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include "Task.h"

using namespace std;

NotificationOfChange::NotificationOfChange()
{

}

void NotificationOfChange::change(Task *&zadanie)
{
	string komunikat, id, assigne, task, description;
	string tmp;

	if (zadanie->updated != 0)
	{
		id = "Zmiana w zadaniu: ";
		assigne = "Assigne: " + zadanie->assigne;
		description = "Opis zadania: " + zadanie->description;

		komunikat = assigne + "\n" + description;
		int msgboxID = MessageBox(NULL, komunikat.c_str(), id.c_str(), MB_ICONEXCLAMATION | MB_OK);
	}
	else
	{
		assigne = "Assigne: " + zadanie->assigne;
		description = "Opis: " + zadanie->description;

		string komunikat = "Nie nastapila zmiana w zadaniu!\n";
		string opis = assigne + "\n" + description;

		int msgboxID = MessageBox(NULL, opis.c_str(), komunikat.c_str(), MB_ICONEXCLAMATION | MB_OK);
	}
}

NotificationOfChange::~NotificationOfChange()
{

}