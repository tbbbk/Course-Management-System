#ifndef __COURSE_H__
#define __COURSE_H__
#include <iostream>
#include "SingleElementVector.hpp"
#include "Student.h"
#include "Teacher.h"
using std::string;

class Course :public Object
{
	friend class System;
private:
	Vector<Student> stu;
	Vector<Teacher> tea;
public:
};

#endif // !__COURSE_H__
