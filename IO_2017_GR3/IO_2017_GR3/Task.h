#pragma once
#include<string>
	using namespace std;

	class Task
	{
	public:
		Task();
		Task(int id, int user_id, string name, string description, double created, double updated);
		~Task();

		int id, user_id;
		string name, description;
		double created, updated;
	};





