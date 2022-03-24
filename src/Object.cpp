#include "Object.h"
#include <iostream>
using std::string;

void Object::setName(string n)
{
	this->name = n;
}

void Object::setID(string i)
{
	this->id = i;
}

string Object::getName()
{
	return this->name;
}

string Object::getID()
{
	return this->id;
}