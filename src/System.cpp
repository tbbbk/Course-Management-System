#include <iostream>
#include <fstream>
#include <string>
#include "IOHelper.h"
#include "System.h"
#include "Object.h"
using namespace std;

System::System()
{
	string crsName, crsID, teaName, teaID, stuName, stuID;
	int stuNum, teaNum;
	ifstream fin("./data/DATA.txt");
	fin >> courseNum;
	for (int i = 1; i <= courseNum; i++)
	{
		Course tmp;
		fin >> crsName >> crsID >> teaNum >> stuNum;
		tmp.setID(crsID);
		tmp.setName(crsName);

		for (int j = 1; j <= teaNum; j++)
		{
			Teacher tmp_2;
			fin >> teaName >> teaID;
			tmp_2.setID(teaID);
			tmp_2.setName(teaName);
			tmp.tea.push_back(tmp_2);
		}

		for (int j = 1; j <= stuNum; j++)
		{
			Student tmp_3;
			fin >> stuName >> stuID;
			tmp_3.setID(stuID);
			tmp_3.setName(stuName);
			tmp.stu.push_back(tmp_3);
		}
		course_t.push_back(tmp);
	}
}

void System::ADD_Course()
{
	Course t;
	string name, id;
	CourseNameNeed();
	PrintWait_2();
	cin >> name;
	CourseIDNeed();
	PrintWait_2();
	cin >> id;
	getchar();
	t.setID(id);
	t.setName(name);

	bool flag = true;
	for (int i = 0; i < course_t.size(); i++)
	{
		if (course_t[i].getID() == t.getID())
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		course_t.push_back(t);
		cout << "Course successfully added." << endl;
	}
	else
		cout << "Course already existed." << endl;
	return;
}

//������Ч
void System::ADD_Student()
{
	int num = 0;//Ŀ��γ�λ��
	string name, id, cid;
	CourseIDNeed();
	PrintWait_2();
	cin >> cid;
	getchar();

	//�жϿγ��Ƿ����
	bool flag = true;
	for (int i = 0; i < course_t.size(); i++)
	{
		if (cid == course_t[i].getID())
		{
			num = i;
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "RE: invalid course ID." << endl;
		return;
	}
	
	PersonNameNeed();
	PrintWait_2();
	cin >> name;
	PersonIDNeed();
	PrintWait_2();
	cin >> id;
	getchar();

	flag = true;
	int len = course_t[num].stu.size();
	for (int i = 0; i < len; i++)
	{
		if (id == course_t[num].stu[i].getID())
		{
			flag = false;
			break;
		}
	}
	if (!flag)
	{
		cout << "RE: existed stu id" << endl;
		return;
	}

	Student t;
	t.setID(id);
	t.setName(name);
	//err:tû�����ӽ�ȥ
	course_t[num].stu.push_back(t);
	cout << "stu successfully added" << endl;
	return;
}

//�޷��Ƴ�
void System::RM_Student()
{
	string id, cid;
	int num;

	CourseIDNeed();
	PrintWait_2();
	cin >> cid;
	getchar();

	//�жϿγ��Ƿ����
	bool flag = true;
	for (int i = 0; i < course_t.size(); i++)
	{
		if (cid == course_t[i].getID())
		{
			num = i;
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "RE: invalid course ID." << endl;
		return;
	}

	PersonIDNeed();
	PrintWait_2();
	cin >> id;
	getchar();

	flag = true;
	for (int i = 0; i < course_t[num].stu.size(); i++)
	{
		if (id == course_t[num].stu[i].getID())
		{
			course_t[num].stu.group.erase(course_t[num].stu.group.begin() + i);
			cout << "successfully remove stu" << endl;
			return;
		}
	}
	cout << "RE nonexistent id belong this crs" << endl;
	return;
}

void System::PRT_All()
{
	for (int i = 0; i < course_t.size(); i++)
	{
		cout << "----------------------------------" << endl;
		cout << "crs:" << endl;
		cout << "*" << course_t[i].getName() << "*" << course_t[i].getID() << "*" << endl;
		cout << "tea:" << endl;
		for (int j = 0; j < course_t[i].tea.size(); j++)
		{
			cout << "*" << course_t[i].tea[j].getName() << "*" << course_t[i].tea[j].getID() << "*" << endl;
		}
		cout << "stu:" << endl;
		for (int j = 0; j < course_t[i].stu.size(); j++)
		{
			cout << "*" << course_t[i].stu[j].getName() << "*" << course_t[i].stu[j].getID() << "*" << endl;
		}

	}
}