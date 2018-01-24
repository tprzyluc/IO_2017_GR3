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

	void change(Task *&zadanie);
	NotificationOfChange();
	~NotificationOfChange();

};

