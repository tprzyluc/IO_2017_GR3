#pragma once
#include <iostream>
#include <string>


using namespace std;

class Pracownik
{
public:
	
	int id;
	string imie;
	string nazwisko;
	Pracownik(string, string);
	Pracownik();
	string email;
};