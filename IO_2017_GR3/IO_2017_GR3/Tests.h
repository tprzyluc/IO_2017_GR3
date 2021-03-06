#pragma once
#include "Zadanie.h"
#include "DeleteFromTask.h"
#include"Task.h"
#include "dump.h"
#include <ctime>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#define cnt_case 3



int test1_delete_task(Task *task)
{
	bool debug = false;
	srand(time(NULL));
	dump("Starting test for checking task",debug);
	clear_view();
	int cnt_fails = 0;
	bool status;
	code_err error_code;

	task = new Task[cnt_case];
	task[0].reporter = "Jan Kowalski";
	task[0].assigne = "Piotr Nowak";
	task[0].description = "Lorem ipsum";
	task[0].id = rand();
	
	task[1].reporter = "";
	task[1].assigne = "Piotr Nowak";
	task[1].description = "Lorem ipsum";
	task[1].id = rand();

	task[2].reporter = "Jan Kowalski";
	task[2].assigne = "";
	task[2].description = "Lorem ipsum";
	task[2].id;

	


	for (int i = 0; i < cnt_case; i++)
	{


		if (task[i].reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status);
			cnt_fails++;

		}
		else if (1)
		{
			for (int i = 0; i < task[i].reporter.length(); i++)
			{
				if ((task[i].reporter[i] < 97 && task[i].reporter[i]>122) || (task[i].reporter[i] < 65 && task[i].reporter[i]>90)) {
					error_code = CREATOR_ERR;
					status = false;
					dump_status(err(error_code), status,debug);
					cnt_fails++;

				}
			}
		}
		if (task[i].assigne == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;

		}
		else if (1)
		{
			for (int i = 0; i < task[i].assigne.length(); i++)
			{
				if ((task[i].assigne[i] < 97 && task[i].assigne[i]>122) || (task[i].assigne[i] < 65 && task[i].assigne[i]>90)) {
					error_code = ASSIGNE_ERR;
					status = false;
					dump_status(err(error_code), status,debug);
					cnt_fails++;

				}
			}
		}
		if (task[i].description == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;
		}
		else if (1)
		{
			for (int i = 0; i < task[i].description.length(); i++)
			{
				if ((task[i].description[i] < 97 && task[i].description[i]>122) || (task[i].description[i] < 65 && task[i].description[i]>90)) {
					error_code = DESC_ERR;
					status = false;
					dump_status(err(error_code), status,debug);
					cnt_fails++;

				}
			}
		}
		if (task[i].id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;
		}
		if (task[i].id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;
		}
		if (task[i].id < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status,debug);
			cnt_fails++;
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

	}
	return cnt_fails;

}

int test2_delete_task(Task *task)
{

	bool debug = false;
	srand(time(NULL));
	dump("Starting test for checking task", debug);
	clear_view();
	int cnt_fails = 0;
	bool status;
	code_err error_code;

		if (task->reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status);
			cnt_fails++;

		}
		else if (1)
		{
			for (int i = 0; i < task->reporter.length(); i++)
			{
				if ((task->reporter[i] < 97 && task->reporter[i]>122) || (task->reporter[i] < 65 && task->reporter[i]>90)) {
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
		else if (1)
		{
			for (int i = 0; i < task->assigne.length(); i++)
			{
				if ((task->assigne[i] < 97 && task->assigne[i]>122) || (task->assigne[i] < 65 && task->assigne[i]>90)) {
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
		else if (1)
		{
			for (int i = 0; i < task->description.length(); i++)
			{
				if ((task->description[i] < 97 && task->description[i]>122) || (task->description[i] < 65 && task->description[i]>90)) {
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






