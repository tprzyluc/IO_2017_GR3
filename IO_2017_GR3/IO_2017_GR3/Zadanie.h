#pragma once
#include <iostream>
#include <string>
#include "Pracownik.h"


using namespace std;

class Zadanie
{
public:
	static int id_zadania;
	string opis = "Description_1";
	int priorytet;
	string owner;
	string creator;
	bool flag = false; 
	Zadanie();
	~Zadanie();
	void print();

};