#include "AssignmentToTask.h"
#include<iostream>
#include "Zadanie.h"
using namespace std;


AssignmentToTask::AssignmentToTask()
{
}
AssignmentToTask::AssignmentToTask(Zadanie noweZad)
{
	id_task = noweZad.id_zadania;
	id_owner = noweZad.owner;
	id_creator = noweZad.creator;
	description = noweZad.opis;
	priority = noweZad.priorytet;


}
void AssignmentToTask::Print()
{
	cout << "Nowe zadanie \n";
	cout << "ID zadania= " << id_task << endl;
	cout << "ID osoby przypisuj¹cej zadanie= " << id_owner << endl;
	cout << "ID osoby przypisanej do zadania= " << id_creator << endl;
	cout << "Opis zadania: " << description << endl;
	cout << "Priorytet zadania: " << priority << endl;

}

AssignmentToTask::~AssignmentToTask()
{
}