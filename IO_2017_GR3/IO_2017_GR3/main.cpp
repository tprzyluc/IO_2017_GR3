#include <iostream>
#include "Tests.h"
#include "dump.h"
#include "TemporaryComment.h"

using namespace std;



int main()
{
	Task *task = new Task();
	test1_delete_task(*&task);
	test2_delete_task(*&task);
	cout << endl;
	//task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	//dump(task->description);
	//dump("Cos tam do wypisania");


	TemporaryComment comment("Kacper", "Lprem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum");
	test2_comment<TemporaryComment>(comment);
	cout << comment.date << endl;


	system("pause");
	return 0;
}