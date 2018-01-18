#pragma once
#include <string>
#include "Zadanie.h"
#include "Pracownik.h"
#include <iostream>
#include "Task.h"

using namespace std;


class NotificationOfChange
{
public:
	Task zadanie;

	string change(Task *&zadanie);
	void print(string komunikat);
	NotificationOfChange();
	~NotificationOfChange();
};

