#include <iostream>
#include "Tests.h"


using namespace std;

int main()
{
	Zadanie *zadanie = new Zadanie();
	test1_delete_task(*&zadanie);

	cout << zadanie->opis << endl;

	cout << "Cos tam ";

	system("pause");
	return 0;
}