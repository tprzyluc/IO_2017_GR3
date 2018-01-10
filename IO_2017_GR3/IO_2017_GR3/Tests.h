#pragma once
#include "Zadanie.h"
#include "DeleteFromTask.h"
#include"Task.h"
#include "dump.h"
#include <ctime>
#include <sstream>

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





/*test for checking comment*/


template <typename Comment> struct  date_test
{
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{
		template<typename Comment, typename int_<decltype(Comment::date)>::type = 0>
		void test_date(Comment comment, special_ )
		{
			if (typeid(comment.date) != typeid(string))
			{
				dump_fail("FAIL: class member 'date' format is not correct, it should be string instead of " +string(typeid(comment.date).name()));
			}
			else 
			{
				stringstream s;
				s << comment.date;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_fail("FAIL: class member 'date' is empty");	
			}
		}

		template<typename Comment>
		void test_date(Comment comment, general_)
		{
			dump_fail("FAIL: class member 'date' does not exist");
		}
	};

	tests t;
	void start(Comment comment)
	{
		t.test_date<Comment>(comment, special_());
	}
};


template <typename Comment> struct  message_test
{
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{
		template<typename Comment, typename int_<decltype(Comment::message)>::type = 0>
		void test_date(Comment comment, special_)
		{
			if (typeid(comment.message) != typeid(string))
			{
				dump_fail("FAIL: class member 'message' format is not correct, it should be string instead of " + string(typeid(comment.message).name()));
			}
			else
			{
				stringstream s;
				s << comment.message;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_fail("FAIL: class member 'message' is empty");
			}
		}



		template<typename Comment>
		void test_message(Comment comment, general_)
		{
			dump_fail("FAIL: class member 'message' does not exist");
		}
	};

	tests t;
	void start(Comment comment)
	{
		t.test_message<Comment>(comment, special_());
	}
};


template <typename Comment> struct  user_test
{
	struct general_ {};
	struct special_ : general_ {};

	template<typename> struct int_ { typedef int type; };
	struct tests
	{

		template<typename Comment, typename int_<decltype(Comment::user)>::type = 0>
		void test_date(Comment comment, special_)
		{
			if (typeid(comment.user) != typeid(string))
			{
				dump_fail("FAIL: class member 'user' format is not correct, it should be string instead of " + string(typeid(comment.user).name()));
			}
			else
			{
				stringstream s;
				s << comment.user;
				string s2;
				s >> s2;
				if (s2 == "")
					dump_fail("FAIL: class member 'user' is empty");
			}
		}

		template<typename Comment>
		void test_user(Comment comment, general_)
		{
			dump_fail("FAIL: class member 'user' does not exist");
		}
	};

	tests t;
	void start(Comment comment)
	{
		t.test_user<Comment>(comment, special_());
	}
};


template < typename Comment>
void test2_comment(Comment comment)
{
	clear_view();
	dump("Starting test for checking comment");

	date_test <Comment> test;
	test.start(comment);

	message_test <Comment> test2;
	test2.start(comment);

	user_test <Comment> test3;
	test3.start(comment);

	dump("End of test");
}






