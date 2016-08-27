#include <iostream>

#ifdef _WIN32
#include "stdafx.h"
#include <Windows.h>
#include <Lmcons.h>
#include <string>
#include <iostream>
#include <ctype.h>
using namespace std;



int  main()
{
	TCHAR username[UNLEN + 1];
	DWORD size = UNLEN + 1;
	GetUserName((TCHAR*)username, &size);
	cout << "Hello, ";
	for (int i = 0; i <= (int)size; i++)
	{
		if (isprint(username[i]) || isspace(username[i]))
		{
			cout << (char)(username[i]);
		}
		else
		{
			break;
		}
	}
	cout << "!\n";
}

#else __linux__
#include <stdio.h>
#include <unistd.h>


int main() {


	char *user;
	user = getlogin();
	cout << "Hello, ";
	for (int i = 0; i <= 35; i++)
	{
		if (isprint(user[i]) || isspace(user[i]))
		{
			cout << (char)(user[i]);
		}
		else
		{
			break;
		}
	}
	cout << "!\n";
}
#endif
