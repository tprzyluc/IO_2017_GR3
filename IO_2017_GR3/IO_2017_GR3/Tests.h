#pragma once
#include "Zadanie.h"
#include"Task.h"
#include "dump.h"
#include <ctime>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#define cnt_case 3

int test2_delete_task(Task *task);

int test1_delete_task(Task *task,int num_case)
{
	bool debug = true;
	srand(time(NULL));
	dump("Starting test for checking task",debug);
	clear_view();
	int cnt_fails = 0;
	bool status;
	code_err error_code;
	
	if (num_case == -1)
	{
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

		num_case = cnt_case;
	}
	if (num_case == 0)
	{
		 test2_delete_task(task);
	}
	else
	{

		for (int j = 0; j < num_case; j++)
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

//tests for NotificationOfChange class

int Test1_For_Change(Task *task)
{
	bool debug = true;
	
	dump("Starting test for checking task", debug);
	clear_view();

	int numFail = 0;
	bool status;
	code_err error_code;
	srand(time(NULL));

	task = new Task[3];

	task[0].id = rand();
	task[0].reporter = "Micha³ Nowakowski";
	task[0].description = "ChangeTask";
	task[0].assigne = "Anna Kowalska";
	task[0].created = rand();
	task[0].updated = rand();

	task[1].id = rand();
	task[1].reporter = "Micha³ Nowakowski";
	task[1].description = "ChangeTask";
	task[1].assigne = "";
	task[1].created = rand();
	task[1].updated;

	task[2].id;
	task[2].reporter = "";
	task[2].description = "ChangeTask";
	task[2].assigne = "Anna Kowalska";
	task[2].created;
	task[2].updated = rand();


	for (int j = 0; j < cnt_case; j++)
	{

		if (task[j].id < 0 || sizeof(task[j].id) != 4)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}
		if (task[j].created < 0 || sizeof(task[j].created) != 8)
		{
			error_code = CREATED_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}

		if (task[j].updated < 0 || sizeof(task[j].updated) != 8)
		{
			error_code = UPDATED_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}


		if (task[j].reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;

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
					numFail++;

				}
			}
		}
		if (task[j].assigne == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;

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
					numFail++;

				}
			}
		}
		if (task[j].description == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
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
					numFail++;

				}
			}
		}

	}
	if (numFail > 0)
	{
		dump_status("STATUS TEST: FAIL", debug);
		dump_status("number of fails: ", numFail, debug);

	}
	else
	{
		dump_status("STATUS TEST: PASS", debug);
		dump_status("number of fails: ", 0, debug);
	}

	dump("End of test", debug);


	return numFail;

}

int Test2_For_Change(Task *task)
{
	bool debug = true;

	dump("Starting test for checking task", debug);
	clear_view();

	int numFail = 0;
	bool status;
	code_err error_code;
	srand(time(NULL));

	

		if (task->id < 0 || sizeof(task->id) != 4)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}
		if (task->created < 0 || sizeof(task->created) != 8)
		{
			error_code = CREATED_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}

		if (task->updated < 0 || sizeof(task->updated) != 8)
		{
			error_code = UPDATED_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
		}


		if (task->reporter == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;

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
					numFail++;

				}
			}
		}
		if (task->assigne == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;

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
					numFail++;

				}
			}
		}
		if (task->description == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			numFail++;
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
					numFail++;

				}
			}
		}
		
	
	if (numFail > 0)
	{
		dump_status("STATUS TEST: FAIL", debug);
		dump_status("number of fails: ", numFail, debug);

	}
	else
	{
		dump_status("STATUS TEST: PASS", debug);
		dump_status("number of fails: ", 0, debug);
	}

	dump("End of test", debug);


	return numFail;

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



int test1_assign_task(Zadanie* zadanie) {
	bool debug = true;
	srand(time(NULL));
	dump("Starting test for checking assignment ", debug);
	clear_view();
	int bledy = 0;
	bool status;
	code_err error_code;

	if (zadanie->id_zadania < 0)
	{
		error_code = ID_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		bledy++;

	}

	if (zadanie->priorytet < 0)
	{
		error_code = PRIORITY_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		bledy++;
	}


	if (zadanie->opis == "") {
		error_code = DESC_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		bledy++;
	}
	else
	{
		for (int i = 0; i < zadanie->opis.length(); i++)
		{
			if ((zadanie->opis[i] >= 97 && zadanie->opis[i] <= 122) || (zadanie->opis[i] >= 65 && zadanie->opis[i] <= 90))
			{
			}
			else {
				error_code = DESC_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				bledy++;

			}
		}
	}




	if (zadanie->creator == "") {
		error_code = CREATOR_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		bledy++;

	}
	else
	{
		for (int i = 0; i < zadanie->creator.length(); i++)
		{

			if ((zadanie->creator[i] >= 97 && zadanie->creator[i] <= 122) || (zadanie->creator[i] >= 65 && zadanie->creator[i] <= 90)) {
			}
			else {
				error_code = CREATOR_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				bledy++;

			}
		}

	}
	if (zadanie->owner == "") {
		error_code = ASSIGNE_ERR;
		status = false;
		dump_status(err(error_code), status, debug);
		bledy++;

	}
	else
	{
		for (int i = 0; i <zadanie->owner.length(); i++)
		{
			if ((zadanie->owner[i] >= 97 && zadanie->owner[i] <= 122) || (zadanie->owner[i] >= 65 && zadanie->owner[i] <= 90)) {
			}
			else {
				error_code = ASSIGNE_ERR;
				status = false;
				dump_status(err(error_code), status, debug);
				bledy++;

			}
		}
	}

	
	if (bledy == 0)
	{
		dump_status("STATUS TEST: PASS", debug);
		dump_status("number of fails: ", bledy, debug);

	}
	else
	{
		dump_status("STATUS TEST: Fail", debug);
		dump_status("number of fails: ", bledy, debug);
	}

	dump("End of test", debug);


	return bledy;

}



int test2_assign_task(Zadanie* zadanie123)
{

	bool debug = true;

	dump("Starting test for checking task", debug);
	clear_view();
	int fails = 0;
	bool status;
	int check = 5;
	code_err error_code;

	zadanie123 = new Zadanie[check];
	for (int i = 0; i < check; i++)
	{
		zadanie123[i].id_zadania = 0;
		zadanie123[i].creator = "";
		zadanie123[i].owner = "";
		zadanie123[i].opis = "";
		zadanie123[i].priorytet = 0;

	}
	zadanie123[0].id_zadania = 1234;
	zadanie123[0].creator = "Janek Kowalski";
	zadanie123[0].owner = "";
	zadanie123[0].opis = "Tytus Tytus Tytus";
	zadanie123[0].priorytet = 1;


	zadanie123[1].id_zadania = 123;
	zadanie123[1].creator = "Janek Kowalski";
	zadanie123[1].owner = "Tytusz Troszczytus";
	zadanie123[1].opis = "";
	zadanie123[1].priorytet = 2;

	zadanie123[2].id_zadania = 123;
	zadanie123[2].creator = "Janek Kowalski";
	zadanie123[2].owner = "Tytus Troszczytus";
	zadanie123[2].opis = "Lorem lorem ipsum";
	zadanie123[2].priorytet = 3;

	zadanie123[3].id_zadania = 12;
	zadanie123[3].creator = "Janek Kowalski";
	zadanie123[3].owner = "Tytus Troszczytus";
	zadanie123[3].opis = "Lorem lorem ipsum";
	zadanie123[3].priorytet = 3;

	zadanie123[4].id_zadania = 123;
	zadanie123[4].creator = "";
	zadanie123[4].owner = "Tytus Troszczytus";
	zadanie123[4].opis = "Lorem lorem ipsum";
	zadanie123[4].priorytet = -1;



	for (int j = 0; j < 5; j++)
	{


		if (zadanie123[j].creator == "") {
			error_code = CREATOR_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;


		}
		else if (1)
		{
			for (int i = 0; i < zadanie123[j].creator.length(); i++)
			{

				if ((zadanie123[j].creator[i] >= 97 && zadanie123[j].creator[i] <= 122) || (zadanie123[j].creator[i] >= 65 && zadanie123[j].creator[i] <= 90) || (zadanie123[j].creator[i] == 32)) {
				}
				else {
					error_code = CREATOR_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;



				}
			}

		}
		if (zadanie123[j].owner == "") {
			error_code = ASSIGNE_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;



		}
		else if (1)
		{
			for (int i = 0; i < zadanie123[j].owner.length(); i++)
			{
				if ((zadanie123[j].owner[i] >= 97 && zadanie123[j].owner[i] <= 122) || (zadanie123[j].owner[i] >= 65 && zadanie123[j].owner[i] <= 90) || (zadanie123[j].owner[i] == 32)) {
				}
				else
				{
					error_code = ASSIGNE_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;

				}
			}
		}
		if (zadanie123[j].opis == "") {
			error_code = DESC_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;

		}
		else if (1)
		{
			for (int i = 0; i < zadanie123[j].opis.length(); i++)
			{
				if ((zadanie123[j].opis[i] >= 97 && zadanie123[j].opis[i] <= 122) || (zadanie123[j].opis[i] >= 65 && zadanie123[j].opis[i] <= 90) || (zadanie123[j].opis[i] == 32)) {

				}
				else
				{
					error_code = DESC_ERR;
					status = false;
					dump_status(err(error_code), status, debug);
					fails++;

				}
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		if (zadanie123[i].id_zadania < 0)
		{
			error_code = ID_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;


		}
		if (zadanie123[i].priorytet < 0)
		{
			error_code = PRIORITY_ERR;
			status = false;
			dump_status(err(error_code), status, debug);
			fails++;

		}
	}




	if (fails != 4)
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




