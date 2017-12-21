#include <iostream>
#include "Tests.h"
#include "dump.h"

using namespace std;

int main()
{
	Task *task = new Task();
	test1_delete_task(*&task);
	task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	dump(task->description);
	dump("Cos tam do wypisania");
	cout << "Cos tam" << endl;

	system("pause");
	return 0;
}