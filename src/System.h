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
	//���г�ʼ����System�Ĺ��캯�������
	System();
	//��ӿγ�
	void ADD_Course();
	//���ѧ��
	void ADD_Student();
	//ɾ��ѧ��
	void RM_Student();
	//��ӡ������Ϣ
	void PRT_All();
};

//����System
//extern System ALL;
#endif // !__SYSTEM_H__
