#include "Task.h"



Task::Task()
{
}

Task::Task(int id, int user_id, string name, string description, double created, double updated)
{
	this->id = id;
	this->user_id = user_id;
	this->name = name;
	this->description = description;
	this->created = created;
	this->updated = updated;

}


Task::~Task()
{
}
