#include "IOHelper.h"
#include <iostream>
#include <string>
using namespace std;

void PrintIntro()
{
	cout << "Welcome to the management system" << endl;
	cout << ">enter <help> to get guidance" << endl;
	cout << ">enter <quit> to exit" << endl;
}

void PrintErr()
{
	cout << "RunTime Error: please enter the right command." << endl;
}

void PrintHelp()
{
	cout << endl;
	cout << "<add crs> to add a coures" << endl;
	cout << "<add (stu|tea)> to add a student/teacher into a course" << endl;
	cout << "<rm crs> to delete a course" << endl;
	cout << "<rm (stu|tea)> to delete a student/course from a course" << endl;
	cout << "<prta> to print all the information" << endl;
	cout << "<prt crs> to print the information about a course" << endl;
}

void PrintWait_1()
{
	cout << endl<< ">>>";
}

void PrintWait_2()
{
	cout << "...";
}

void PersonIDNeed()
{
	cout << "Person ID:" << endl;
}

void PersonNameNeed()
{
	cout << "Person Name:" << endl;
}

void CourseNameNeed()
{
	cout << "Course Name:" << endl;
}

void CourseIDNeed()
{
	cout << "Course ID;" << endl;
}

int CommandSTDin()
{
	string op;
	getline(cin, op);

	if (op == "add crs")
		return 1;
	else if (op == "add stu")
		return 2;
	else if (op == "rm crs")
		return 3;
	else if (op == "rm stu")
		return 4;
	else if (op == "prta")
		return 5;
	else if (op == "prt crs")
		return 6;
	else if (op == "add tea")
		return 7;
	else if (op == "rm tea")
		return 8;
	else if (op == "help")
		return 9;
	else if (op == "quit")
		return 10;
	else
		return 0;
}