#ifndef __IOHELPER_H__
#define __IOHELPER_H__

//打印指导信息
void PrintIntro();

//打印错误信息
void PrintErr();

//打印帮助信息
void PrintHelp();

//打印等待>>>/...信息
void PrintWait_1();
void PrintWait_2();


//打印ID需求信息
void PersonIDNeed();
void PersonNameNeed();
void CourseIDNeed();
void CourseNameNeed();

//指令输入
/*
* 0：指令错误
* 1：添加课程
* 2：添加学生
* 3：移除课程
* 4：移除学生
* 5：打印所有信息
* 6：打印课程信息
* 7：添加老师
* 8：移除老师
* 9：打印帮助信息
* 10：退出
*/
int CommandSTDin();

#endif // !__IOHELPER_H__
