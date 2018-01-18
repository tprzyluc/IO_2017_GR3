#include "Pracownik.h"
#include "Zadanie.h"

Zadanie::Zadanie()
{
	id_zadania++;
}
Zadanie::~Zadanie()
{
	
}
int Zadanie::id_zadania = 0;
void Zadanie::print()
{
	cout << owner << " "  <<creator << " " << "id: " << id_zadania << endl;
	cout << opis << endl;
}