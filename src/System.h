#ifndef __SYSTEM_H__
#define __SYSTEM_H__
#include "SingleElementVector.hpp"
#include "Course.h"

class System
{
private:
	int courseNum;
	Vector<Course> course_t;
public:
	//所有初始化在System的构造函数中完成
	System();
	//添加课程
	void ADD_Course();
	//添加学生
	void ADD_Student();
	//删除学生
	void RM_Student();
	//打印所有信息
	void PRT_All();
};

//总类System
//extern System ALL;
#endif // !__SYSTEM_H__
