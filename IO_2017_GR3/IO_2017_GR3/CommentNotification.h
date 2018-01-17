#pragma once
#include "TemporaryComment.h"
#include <windows.h>
#include <string>



void commentNotification(TemporaryComment comment)
{

	string title = "Nowy komentarz - " + comment.date;
	string message = "u¿ytkownik: " + comment.user + "\n" + comment.message;
	int msgboxID = MessageBox(
		NULL,message.c_str(),title.c_str(),
		MB_ICONEXCLAMATION | MB_OK
	);

}