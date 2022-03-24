#ifndef __OBJECT_H__
#define __OBJECT_H__
#include <iostream>
using namespace std;

class Object
{
	private:
		string name;
		string id;
	public:
		Object(){};
		Object(string a, string b) :name(a), id(b) {}
		~Object(){};
		void setName(string n);
		void setID(string i);
		string getName();
		string getID();
};

#endif // !__OBJECT_H__

