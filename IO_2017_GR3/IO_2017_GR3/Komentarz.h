#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komentarz {
public:
	int id_komentarza;
	string tresc;
	int id_user;
	static int iid;
	
		
	
	void dodaj_komentarz(Komentarz);
	Komentarz(string Tresc, int id_User)
	{

	};

};

/*
	 There is no possibility to know who is the ID of the owner because we do not have access to databases. In my opinion, we should issue a bug on it. 
*/