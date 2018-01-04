#pragma once
#include "Zadanie.h"
#include "DeleteFromTask.h"
#include"Task.h"
#include "dump.h"

void test1_delete_task(Task *task)
{
	/*
	DeleteFromTask deleteFromTask;
	task->name = "Adam Kowalski";
	task->id = 0;

	//zadanie->print();
	//zadanie->~Zadanie();
	string komunikat = deleteFromTask.delete_task(task);
	deleteFromTask.print(komunikat);
	cout << "--------------------------------" << endl;
	//zadanie->print();
	*/
	//task->name = "Janek";

	dump("Starting test for checking task");
	clear_view();


	int cnt_fails = 0;
	code_err error_code;
	bool status;

	if (task->name == "") {
		error_code = CREATOR_ERR;
		status = false;
		dump_fail(err(error_code), status);
		cnt_fails++; 

	}
	else
	{
		//dump_fail("STATUS TEST: PASS");
	}
	if (task->description == "") {
		error_code = DESC_ERR;
		status = false; 
		dump_fail(err(error_code),status);
		cnt_fails++;

	}
	else
	{
		//dump_fail("STATUS TEST: PASS");
	}

	if (cnt_fails > 0)
	{
		dump_fail("STATUS TEST: FAIL");
		dump_fail("number of fails: ", cnt_fails);
		
	}
	else
	{
		dump_fail("STATUS TEST: PASS");
		dump_fail("number of fails: ", 0);
	}

	dump("End of test");


	
}
