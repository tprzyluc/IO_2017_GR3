#pragma once
#include <string>
#include "Zadanie.h"
#include "Pracownik.h"
#include <iostream>
#include "Task.h"

using namespace std;


class DeleteFromTask
{
public:
	Task zadanie;
	string delete_task(Task *&zadanie);
	DeleteFromTask();
	void print(string);
	~DeleteFromTask();
};

