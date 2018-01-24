#include <iostream>
#include "Tests.h"
#include "dump.h"
#include "TemporaryComment.h"
#include "DeleteTask.h"
#include "CommentNotification.h"
#include "NotificationOfChange.h"
using namespace std;



int main()
{
	Task *task = new Task();
	
	//test1_delete_task(*&task);
	task->assigne = "Roman";
	task->description = "janek";
	task->reporter =  "adam";
	task->created = 5.0;
	task->updated = 0.0;
	
	//DeleteTask(task);
	//test2_delete_task(*&task);
	//cout << endl;

	
	Test1_For_Change(*&task);
	cout << endl;
	Test2_For_Change(*&task);
	cout << endl;


	//task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	//dump(task->description);
	//dump("Cos tam do wypisania");


	TemporaryComment comment("Kacper", "Lprem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum");
	test2_comment<TemporaryComment>(comment);
	cout << comment.date << endl;
	commentNotification(comment);

	


	system("pause");
	return 0;
}