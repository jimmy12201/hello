// Testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <Lmcons.h>
#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int  main()
{
	TCHAR username[UNLEN + 1];
	DWORD size = UNLEN + 1;
	GetUserName((TCHAR*)username, &size);
	for (int i = 0; i <= size; i++)
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
}

