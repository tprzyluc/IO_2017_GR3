#pragma once


#include"Komentarz.h"

 


void dump(string str,bool debug)
{
	if (debug == true) {
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "*";

		}
		cout << endl;
		cout << "* " << str << "  *" << endl;
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "*";

		}
		cout << endl;
	}
}
void dump_status(string str,bool debug)
{
	if (debug == true) {
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "-";

		}
		cout << endl;
		cout << "| " << str << " |" << endl;
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "-";

		}
		cout << endl;
	}
}
void dump_status(string str,int val,bool debug)
{
	if (debug == true) {
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "-";

		}
		cout << endl;
		cout << "|" << str << " " << val << " |" << endl;
		for (int i = 0; i < str.length() + 5; i++)
		{
			cout << "-";

		}
		cout << endl;
	}
}

// add status true, change name of function -> dump_status
void dump_status(string str, bool status,bool debug)
{
	if (debug == true) {
		if (status == false) {
			for (int i = 0; i < str.length() + 10; i++)
			{
				cout << "-";

			}
			cout << endl;
			cout << "|" << "FAIL: " << str << "  |" << endl;
			for (int i = 0; i < str.length() + 10; i++)
			{
				cout << "-";

			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < str.length() + 10; i++)
			{
				cout << "-";

			}
			cout << endl;
			cout << "|" << "PASS: " << str << "  |" << endl;
			for (int i = 0; i < str.length() + 10; i++)
			{
				cout << "-";

			}
			cout << endl;
		}
	}

}
void clear_view()
{
	for (int i = 0; i < 3; i++)
	{
		cout << ">" << endl;
	}
}
// to be done; 
enum code_err {
	CREATOR_ERR  = 1,
	DESC_ERR	 = 2,
	ASSIGNE_ERR  = 3,
	PRIORITY_ERR = 4,
	ID_ERR		 = 5,
	UPDATED_ERR  = 6,

};
string err(int num_err)
{
	string description;

	switch (num_err)
	{
	case 1:
		description = "This task has not got: name of creator";
		return description;
	case 2:
		description = "This task has not got: description!";
		return description;
	case 3:
		description = "This task has not got: assignee!";
		return description;
	case 4:
		description = "This task has not got: Priority!";
		return description;
	case 5:
		description = "This task has wrong ID - less than 0";
		return description;
	case 6:
		description = "This task has not got: none!";
		return description;
	default:
		break;
	}
}