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



	cout << "WERKA ----------------------------" << endl;
	Zadanie* zadanie = new Zadanie();
	

	AssignmentTask(zadanie);
	//test2_assign_task(*&zadanie);



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