#ifndef __IOHELPER_H__
#define __IOHELPER_H__

//��ӡָ����Ϣ
void PrintIntro();

//��ӡ������Ϣ
void PrintErr();

//��ӡ������Ϣ
void PrintHelp();

//��ӡ�ȴ�>>>/...��Ϣ
void PrintWait_1();
void PrintWait_2();


//��ӡID������Ϣ
void PersonIDNeed();
void PersonNameNeed();
void CourseIDNeed();
void CourseNameNeed();

//ָ������
/*
* 0��ָ�����
* 1����ӿγ�
* 2�����ѧ��
* 3���Ƴ��γ�
* 4���Ƴ�ѧ��
* 5����ӡ������Ϣ
* 6����ӡ�γ���Ϣ
* 7�������ʦ
* 8���Ƴ���ʦ
* 9����ӡ������Ϣ
* 10���˳�
*/
int CommandSTDin();

#endif // !__IOHELPER_H__
