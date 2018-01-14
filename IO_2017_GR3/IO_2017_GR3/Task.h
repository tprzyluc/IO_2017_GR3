#pragma once
#include<string>
	using namespace std;

	class Task
	{
	public:
		Task();
		Task(int id, int user_id, string reporter, string description,string assignee, double created, double updated);
		~Task();

		int id, user_id;
		string reporter, description,assigne;
		double created, updated;
	};





