//--- MS C������ ��� ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

//-- �л��� �������� �����غ��ô�.

struct score {
	int math; // ��������
	int eng; // ��������
	int total; //����
	double average; // ���

};

struct student {
	int no; // �й�
	char name[50]; // �л��̸�
	struct score s; // score ����ü Ÿ���� ��� ����
};

#define MAX_STD_CNT 10

int main_04(void) {

	struct student stu[MAX_STD_CNT];	// ������ ����ü(�迭)
	
	(*stu).no = 10;	//<-- stu[0] --> stu -> no;
	(*(stu+1)).no = 10;

	stu->no = 10; //stu[0]
	(stu + 1)->no = 20; //stu[1]

	// stu[2].no =20;
	// 1. sti[2].no = 20;
	// 2. (*stu).no = 20;
	// 3. stu->no = 20;

	// -- �Ϲ� ������ -> �����?
	//-- �� �� �ֽ��ϴ�. ���Ƽ�
	struct student stu2; // �Ϲݺ���
	stu2.no = 20;
	(*(&stu2)).no = 30;
	(&stu2)->no = 30;

	printf("%d\n", stu[0].no);


	return 0;

}