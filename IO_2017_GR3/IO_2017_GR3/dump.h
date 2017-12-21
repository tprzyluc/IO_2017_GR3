#pragma once


#include"Komentarz.h"

 


void dump(string str)
{
	for (int i = 0; i < str.length()+5; i++)
	{
		cout << "*";

	}
	cout << endl;
	cout << "*" << str << "   *" << endl;
	for (int i = 0; i < str.length()+5; i++)
	{
		cout << "*";

	}
	cout << endl;
}