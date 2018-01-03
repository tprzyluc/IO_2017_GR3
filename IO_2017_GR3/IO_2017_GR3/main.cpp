#include <iostream>
#include "Tests.h"
#include "dump.h"

using namespace std;

int main()
{
	Task *task = new Task();
	test1_delete_task(*&task);
	cout << endl;
	task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	dump(task->description);
	dump("Cos tam do wypisania");

	system("pause");
	return 0;
}