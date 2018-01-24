#include <iostream>
#include "Tests.h"
#include "dump.h"
#include "TemporaryComment.h"
#include "DeleteTask.h"
#include "CommentNotification.h"
#include "CommentAssignment.h"
using namespace std;



int main()
{
	Task *task = new Task();
	//test1_delete_task(*&task);
	task->assigne = "Roman";
	task->description = "janek";
	task->reporter =  "dom";

	DeleteTask(task);
	test2_delete_task(*&task);
	cout << endl;
	//task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	//dump(task->description);
	//dump("Cos tam do wypisania");


	TemporaryComment comment("Kacper", "Lprem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum");
	test2_comment<TemporaryComment>(comment);
	cout << comment.date << endl;
	commentNotification(comment);

<<<<<<< HEAD
	Zadanie* zadanie = new Zadanie();
	

	AssignmentTask(zadanie);
	//test2_assign_task(*&zadanie);
=======

>>>>>>> 80e31e14862e28e88f0b289095eb2a24761a9e52

	system("pause");
	return 0;
}