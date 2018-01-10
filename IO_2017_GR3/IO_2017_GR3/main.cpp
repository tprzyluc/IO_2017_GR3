#include <iostream>
#include "Tests.h"
#include "dump.h"

using namespace std;



int main()
{
	Task *task = new Task();
	test1_delete_task(*&task);
	cout << endl;
	//task->description = " Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum";
	//cout << task->description << endl;
	//dump(task->description);
	//dump("Cos tam do wypisania");

	Komentarz k("tresc", 1);
	test2_comment<Komentarz>(k);

	system("pause");
	return 0;
}