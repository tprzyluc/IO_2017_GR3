#include "TemporaryComment.h"




TemporaryComment::TemporaryComment(string user, string message)
{
	char date_buff[26];
	time_t *currentTime = new time_t;
	time(currentTime);
	ctime_s(date_buff, 26, currentTime);
	this->date=date_buff;
	this->user = user;
	this->message = message;
}

TemporaryComment::~TemporaryComment()
{
}
