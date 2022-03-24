#include <iostream>
#include "Object.h"
#include "IOHelper.h"
#include "System.h"
using namespace std;

int main()
{
	System ALL;
	PrintIntro();
	while (1)
	{
		PrintWait_1();
		switch (CommandSTDin())
		{
		case 0:
		{
			PrintErr();
			break;
		}
		case 1:
		{
			ALL.ADD_Course();
			break;
		}
		case 2:
		{
			ALL.ADD_Student();
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			ALL.RM_Student();
			break;
		}
		case 5:
		{
			ALL.PRT_All();
			break;
		}
		case 6:
		{
			break;
		}
		case 7:
		{
			break;
		}
		case 8:
		{
			break;
		}
		case 9:
		{
			PrintHelp();
			break;
		}
		case 10:
		{
			return 0;
			break;
		}
		default:
			break;
		}
	}
	return 0;
}
