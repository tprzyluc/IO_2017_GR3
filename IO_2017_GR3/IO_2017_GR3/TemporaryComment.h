#pragma once
#include <string>
#include <ctime>

using namespace std;


class TemporaryComment
{
public:

	

	string date;
	string user;
	string message;


	TemporaryComment(string user, string message);
	~TemporaryComment();
};
