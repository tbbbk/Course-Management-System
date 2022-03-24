#ifndef __SINGLEELEMENTVECTOR_H__
#define __SINGLEELEMENTVECTOR_H__
#include <vector>
#include <iostream>
using namespace std;

//实现一个以id为索引的不重复的vector
template <typename T>
class Vector
{
	friend class System;

private:
	vector<T> group;

public:
	//void rm(typename vector<T>::iterator it)//删除
	//{
	//	group.erase(it);
	//}

	//typename vector<T>::iterator begin()
	//{
	//	return group.begin();
	//}

	void push_back(T &t)//插入
	{
		bool flag = false;
		for (int i = 0; i < group.size(); i++)
		{
			if (group.at(i).getID() == t.getID())
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			group.push_back(t);
		}
	}

	bool count(T t)//重复查询
	{
		for (int i = 0; i < group.size(); i++)
		{
			if (group.at(i).getID() == t.getID())
				return true;
		}
		return false;
	}

	int size()//数量查询
	{
		return group.size();
	}

	T operator[](int n)
	{
		return group[n];
	}
};

#endif // !__SINGLEELEMENTVECTOR_H__
