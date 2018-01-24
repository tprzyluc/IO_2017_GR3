#pragma once
#include <iostream>
#include <string>
#include "Zadanie.h"

class AssignmentToTask
{
public:

	int id_task;
	string id_owner;
	string id_creator;
	string description;
	int priority;


	Zadanie noweZadanie;


	AssignmentToTask();
	AssignmentToTask(Zadanie noweZad);
	void Print();

	~AssignmentToTask();
};
