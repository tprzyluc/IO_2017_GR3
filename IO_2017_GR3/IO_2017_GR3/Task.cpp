#include "Task.h"



Task::Task()
{
	this->id = NULL;
	this->user_id = NULL;
	this->reporter = "";
	this->assigne = "";
	this->description = "";
	this->created = NULL;
	this->updated = NULL;
}
//Task::Task()
//{
//	this->id;
//	this->user_id;
//	this->name;
//	this->description;
//	this->created;
//	this->updated;
//}
Task::Task(int id, int user_id, string name, string description, string assigne, double created, double updated)
{
	this->id = id; // ?
	this->user_id = user_id; //?
	this->reporter = name;
	this->assigne = assigne;
	this->description = description;
	this->created = created; //? 
	this->updated = updated; //? 

}


Task::~Task()
{
}
