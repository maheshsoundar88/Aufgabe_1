// Aufgabe_1.cpp : Defines the entry point for the console application.
// Bitte _CRT_SECURE_NO_WARNINGS hinzufügen unter Projekt->Properties->C/C++->Preprocessor->Preprocessor Definitions


//
#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char my_string[50] = "first string";
	char my_string1[50] = "second string";
	cout << "my_string: "<< my_string<<" and my_string1: "<<my_string1<<endl;

	strcpy(my_string, my_string1);
	cout << "Nach dem Kopieren" << endl;
	cout << "my_string: " << my_string << " and my_string1: " << my_string1 << endl;
	system("pause");

	return 0;
}

