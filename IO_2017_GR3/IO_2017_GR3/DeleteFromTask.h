#pragma once
#include <string>
#include "Zadanie.h"
#include "Pracownik.h"
#include <iostream>

using namespace std;


class DeleteFromTask
{
public:
	Zadanie zadanie;
	string delete_task(Zadanie *&zadanie);
	DeleteFromTask();
	void print(string);
	~DeleteFromTask();
};

