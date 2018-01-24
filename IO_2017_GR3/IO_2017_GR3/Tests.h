#pragma once
#include "Zadanie.h"
#include"Task.h"
#include "dump.h"
#include <ctime>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#define cnt_case 3



int test1_delete_task(Task *task)
{
	bool debug = true;
	srand(time(NULL));
	dump("Starting test for checking task",debug);
	clear_view();
	int cnt_fails = 0;
	bool status;
	code_err error_code;

	task = new Task[3];
	task[0].reporter = "Jan Kowalski";
	task[0].assigne = "Piotr Nowak";
	task[0].description = "Loremipsum";
	task[0].id = rand();
	task[0].updated = rand();

	task[1].reporter = "";
	task[1].assigne = "Piotr Nowak";
	task[1].description = "Lorem ipsum";
	task[1].id = rand();
	task[1].updated;

	task[2].reporter = "Jan Kowalski";
	task[2].assigne = "";
	task[2].description = "Lorem ipsum";
	task[2].id;
	task[2].updated = rand();

	
	for (int j = 0; j < cnt_case; j++)
	{
		if (task[j].reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;

		}
		else
		{
			for (int i = 0; i < task[j].reporter.length(); i++)
			{
				if ((task[j].reporter[i] >= 97 && task[j].reporter[i] <= 122) || (task[j].reporter[i] >= 65 && task[j].reporter[i] <= 90) || task[j].reporter[i] == 32)
				{
				}
				else
				{
					error_code = CREATOR_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}
		if (task[j].assigne == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;

		}
		else
		{
			for (int i = 0; i < task[j].assigne.length(); i++)
			{
				if ((task[j].assigne[i] >= 97 && task[j].assigne[i] <= 122) || (task[j].assigne[i] >= 65 && task[j].assigne[i] <= 90) || task[j].assigne[i] == 32)
				{
				}
				else
				{
					error_code = ASSIGNE_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}
		if (task[j].description == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}
		else
		{
			for (int i = 0; i < task[j].description.length(); i++)
			{
				if ((task[j].description[i] >= 97 && task[j].description[i] <= 122) || (task[j].description[i] >= 65 && task[j].description[i] <= 90) || task[j].description[i] == 32)
				{
				}
				else
				{
					error_code = DESC_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}

		if (task[j].id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}
		
	}
		if (cnt_fails > 0)
		{
			dump_status("STATUS TEST: FAIL",debug);
			dump_status("number of fails: ", cnt_fails,debug);

		}
		else
		{
			dump_status("STATUS TEST: PASS", debug);
			dump_status("number of fails: ", 0,debug);
		}

		dump("End of test",debug);

	
	return cnt_fails;

}

int test2_delete_task(Task *task)
{

	bool debug = true;
	srand(time(NULL));
	dump("Starting test for checking task", debug);
	clear_view();
	int cnt_fails = 0;
	bool status;
	code_err error_code;

		if (task->reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;

		}
		else
		{
			for (int i = 0; i < task->reporter.length(); i++)
			{
				if ((task->reporter[i] >= 97 && task->reporter[i] <= 122) || (task->reporter[i] >= 65 && task->reporter[i] <= 90) || task->reporter[i] == 32)
				{
				}
				else
				{
					error_code = CREATOR_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}
		if (task->assigne == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;

		}
		else
		{
			for (int i = 0; i < task->assigne.length(); i++)
			{
				if ((task->assigne[i] >= 97 && task->assigne[i] <= 122) || (task->assigne[i] >= 65 && task->assigne[i] <= 90) || task->assigne[i] == 32)
				{
				}
				else
				{
					error_code = ASSIGNE_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}
		if (task->description == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}
		else
		{
			for (int i = 0; i < task->description.length(); i++)
			{
				if ((task->description[i] >= 97 && task->description[i] <= 122) || (task->description[i] >= 65 && task->description[i] <= 90) || task->description[i] == 32)
				{
				}
				else
				{
					error_code = DESC_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					cnt_fails++;

				}
			}
		}
		if (task->id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}
		if (task->id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}
		if (task->id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			cnt_fails++;
		}



		if (cnt_fails > 0)
		{
			dump_status("STATUS TEST: FAIL", debug);
			dump_status("number of fails: ", cnt_fails, debug);

		}
		else
		{
			dump_status("STATUS TEST: PASS", debug);
			dump_status("number of fails: ", 0, debug);
		}

		dump("End of test", debug);

	
	return cnt_fails;
}









/*test for checking comment*/


template <typename Comment> struct  date_test
{
	
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{
		template<typename Comment, typename int_<decltype(Comment::date)>::type = 0>
		void test_date(Comment comment, bool debug, special_ )
		{
			if (typeid(comment.date) != typeid(string))
			{
				dump_status("FAIL: class member 'date' format is not correct, it should be string instead of " +string(typeid(comment.date).name()), debug);
			}
			else 
			{
				stringstream s;
				s << comment.date;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_status("FAIL: class member 'date' is empty", debug);	
			}
		}

		template<typename Comment>
		void test_date(Comment comment, bool debug, general_)
		{
			dump_status("FAIL: class member 'date' does not exist", debug);
		}
	};

	tests t;
	void start(Comment comment, bool debug)
	{
		
		t.test_date<Comment>(comment, debug, special_());
	}
};


template <typename Comment> struct  message_test
{
	bool debug;
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{
		template<typename Comment, typename int_<decltype(Comment::message)>::type = 0>
		void test_message(Comment comment, bool debug, special_)
		{
			if (typeid(comment.message) != typeid(string))
			{
				dump_status("FAIL: class member 'message' format is not correct, it should be string instead of " + string(typeid(comment.message).name()), debug);
			}
			else
			{
				stringstream s;
				s << comment.message;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_status("FAIL: class member 'message' is empty", debug);
			}
		}


		template<typename Comment>
		void test_message(Comment comment, bool debug, general_)
		{
			//dump_status("FAIL: class member 'message' does not exist");
		}
	};

	tests t;
	void start(Comment comment, bool debug)
	{
		t.test_message<Comment>(comment, debug, special_());
	}
};


template <typename Comment> struct  user_test
{
	bool debug;
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{

		template<typename Comment, typename int_<decltype(Comment::user)>::type = 0>
		void test_user(Comment comment, bool debug, special_)
		{
			if (typeid(comment.user) != typeid(string))
			{
				dump_status("FAIL: class member 'user' format is not correct, it should be string instead of " + string(typeid(comment.user).name()), debug);
			}
			else
			{
				stringstream s;
				s << comment.user;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_status("FAIL: class member 'user' is empty", debug);
			}
		}

		template<typename Comment>
		void test_user(Comment comment, bool debug, general_)
		{
		//	dump_status("FAIL: class member 'user' does not exist");
		}
	};

	tests t;
	void start(Comment comment, bool debug)
	{
		t.test_user<Comment>(comment, debug, special_());
	}
};


template < typename Comment>
void test2_comment(Comment comment)
{
	bool debug =false;
	clear_view();
	dump("Starting test for checking comment", debug);

	date_test <Comment> test;
	test.start(comment, debug);

	message_test <Comment> test2;
	test2.debug = debug;
	test2.start(comment, debug);

	user_test <Comment> test3;
	test3.debug = debug;
	test3.start(comment, debug);

	dump("End of test",debug);
}

//test for checking assignment



int test1_assign_task(Zadanie* zadanie) //Task* task
{
	bool debug = false;
	srand(time(NULL));
	dump("Starting test for checking assignment ", debug);
	clear_view();
	int fails = 0;
	bool status;
	code_err error_code;

	if (zadanie->id_zadania < 0)
	{
		error_code = ID_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		fails++;
	}

	if (zadanie->priorytet < 0)
	{
		error_code = ID_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		fails++;
	}


	if (zadanie->opis == "") {
		error_code = DESC_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		fails++;
	}
	else
	{
		for (int i = 0; i < zadanie->opis.length(); i++)
		{
			if ((zadanie->opis[i] < 97 && zadanie->opis[i]>122) || (zadanie->opis[i] < 65 && zadanie->opis[i]>90)) {
				error_code = DESC_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				fails++;

			}
		}
	}




	if (zadanie->creator == "") {
		error_code = CREATOR_ERR;
		status = false;
		dump_status(err(error_code), status);
		fails++;

	}
	else
	{
		for (int i = 0; i < zadanie->creator.length(); i++)
		{

			if ((zadanie->creator[i] >= 97 && zadanie->creator[i] <= 122) || (zadanie->creator[i] >= 65 && zadanie->creator[i] <= 90)) {
				error_code = CREATOR_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				fails++;

			}
		}

	}
	if (zadanie->owner == "") {
		error_code = ASSIGNE_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		fails++;

	}
	else
	{
		for (int i = 0; i <zadanie->owner.length(); i++)
		{
			if ((zadanie->owner[i] >= 97 && zadanie->owner[i] <= 122) || (zadanie->owner[i] >= 65 && zadanie->owner[i] <= 90)) {
				error_code = ASSIGNE_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				fails++;

			}
		}
	}


	if (fails == 0)
	{
		dump_status("STATUS TEST: FAIL", debug);
		dump_status("number of fails: ", fails, debug);

	}
	else
	{
		dump_status("STATUS TEST: PASS", debug);
		dump_status("number of fails: ", 123, debug);
	}

	dump("End of test", debug);


	return fails;

}


int test2_assign_task(Zadanie* zadanie)
{

	bool debug = true;

	dump("Starting test for checking task", debug);
	clear_view();
	int fails = 0;
	bool status;
	code_err error_code;

	zadanie = new Zadanie[cnt_case];
	zadanie[0].id_zadania = 1234;
	zadanie[0].creator = "Jan Kowalski";
	zadanie[0].owner = "Adam Nowak";
	zadanie[0].opis = "Lorem ipsum";
	zadanie[0].priorytet = rand();


	zadanie[0].id_zadania = 1234;
	zadanie[0].creator = "Jan Kowalski";
	zadanie[0].owner = "fghj";
	zadanie[0].opis = "Lorem ipsum";
	zadanie[0].priorytet = rand();

	zadanie[0].id_zadania = 1234;
	zadanie[0].creator = "fgh";
	zadanie[0].owner = "Adam Nowak";
	zadanie[0].opis = "Lorem ipsum";
	zadanie[0].priorytet = rand();




	for (int j = 0; j < cnt_case; j++)
	{


		if (zadanie[j].creator == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status);
			fails++;

		}
		else if (1)
		{
			for (int i = 0; i < zadanie[j].creator.length(); i++)
			{

				if ((zadanie[j].creator[i] >= 97 && zadanie[j].creator[i] <= 122) || (zadanie[j].creator[i] >= 65 && zadanie[j].creator[i] <= 90) || (zadanie[j].creator[i] == 32)) {
					error_code = CREATOR_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;
					break;

				}
			}

		}
		if (zadanie[j].owner == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;

		}
		else if (1)
		{
			for (int i = 0; i < zadanie[j].owner.length(); i++)
			{
				if ((zadanie[j].owner[i] >= 97 && zadanie[j].owner[i] <= 122) || (zadanie[j].owner[i] >= 65 && zadanie[j].owner[i] <= 90) || (zadanie[j].owner[i] == 32)) {
					error_code = ASSIGNE_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;
					break;
				}
			}
		}
		if (zadanie[j].opis == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;
		}
		else if (1)
		{
			for (int i = 0; i < zadanie[j].opis.length(); i++)
			{
				if ((zadanie[j].opis[i] >= 97 && zadanie[j].opis[i] <= 122) || (zadanie[j].opis[i] >= 65 && zadanie[j].opis[i] <= 90) || (zadanie[j].opis[i] == 32)) {
					error_code = DESC_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;
					break;
				}
			}
		}


		if (zadanie[j].id_zadania < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;
		}
		if (zadanie[j].priorytet < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;
		}
	}

		fails = 3;

		if (fails >0)
		{
			dump_status("STATUS TEST: FAIL", debug);
			dump_status("number of fails: ", fails, debug);

		}
		else
		{
			dump_status("STATUS TEST: PASS", debug);
			dump_status("number of fails: ", fails, debug);
		}

		dump("End of test", debug);


		return fails;
	
}




