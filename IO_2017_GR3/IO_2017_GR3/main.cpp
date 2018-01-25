#include <iostream>
#include "Tests.h"
#include "dump.h"
#include "TemporaryComment.h"
#include "DeleteTask.h"
#include "CommentNotification.h"
#include "CommentAssignment.h"
#include "NotificationOfChange.h"
using namespace std;



int main()
{
	Task *task = new Task();
	task->assigne = "Roman";
	task->description = "janek";
	task->reporter = "adam";
	task->id = 5;
	//test1_delete_task(*&task,0);
	//test2_delete_task(*&task);
	DeleteTask(task);
	cout << endl;
	
	system("pause");


	task->assigne = "Roman";
	task->description = "janek";
	task->reporter =  "adam";
	task->created = 5.0;
	task->updated = 0.0;
	
	

	
	Test1_For_Change(*&task);
	cout << endl;
	Test2_For_Change(*&task);
	cout << endl;


	//task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	//dump(task->description);
	//dump("Cos tam do wypisania");
	//Task *task = new Task();
	////test1_delete_task(*&task);
	//task->assigne = "Roman";
	//task->description = "janek";
	//task->reporter =  "dom";

	//DeleteTask(task);
	//test2_delete_task(*&task);
	//cout << endl;
	////task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	////cout << task->description << endl;
	////dump(task->description);
	////dump("Cos tam do wypisania");


	//TemporaryComment comment("Kacper", "Lprem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum");
	//test2_comment<TemporaryComment>(comment);
	//cout << comment.date << endl;
	//commentNotification(comment);

	


	cout << "-------------------------------" << endl;
	Zadanie* zadanie = new Zadanie();
	//zadanie->creator = "ola";
	//zadanie->owner = "asia";
	//zadanie->opis = "Lorem ipsum";
	//zadanie->priorytet = 50;
	//zadanie->id_zadania = 1;

	zadanie->creator = "Kowalski Janek";
	zadanie->owner = "Tytus Troszczytus";
	zadanie->id_zadania = 102;
	zadanie->priorytet = 1;
	zadanie->opis = " Tam ta ram tam dam";

	

	Zadanie* zadanie1 = new Zadanie();
	AssignmentTask(zadanie1);
	//test1_assign_task(*&zadanie);
	//test2_assign_task(*&zadanie);
	AssignmentTask2(zadanie);





	Task *task2 = new Task();
	task2->assigne = "Jan12";
	task2->description = "cos tamcos tamcos tamcos tamcos tamcos tamcos tamcos tamcos tamcos tamcos tamcos tam";
	task2->created = 152.4;
	task2->updated = 0;

	NotificationOfChange *notif = new NotificationOfChange();
	notif->change(task2);

	system("pause");
	return 0;
}