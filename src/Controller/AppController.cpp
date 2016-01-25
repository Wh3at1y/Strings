/*
 * AppController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: smon7958
 */

#include "AppController.h"
#include <iostream>
using namespace std;

void AppController :: start()
{
string Word = "Hello";
cout << Word.length() << endl;
	if(!Word.empty())
	{
		cout << "The String is not empty." << endl;
	}
	else
	{
		cout << "The string is empty" << endl;
	}

	if(Word.compare("Hello")==0)
	{
		cout << "They are the same!" << endl;
	}
	else
	{
		cout << "They are not the same" << endl;
	}

	 cout << Word.at(3) << endl;
	 cout << Word.substr(2, 3) << endl;
	 cout << Word.substr(0) << endl;
}

