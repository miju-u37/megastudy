/*
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

int main(void) {

	struct student stu[MAX_STD_CNT];	// �л� ����ü �ϳ� ����(�л� �Ѹ� ����)
	// stu[0].no = 2021010001; //�迭����
	
	for (int i = 0; i < MAX_STD_CNT; i++) {
		printf("�й�, �̸�, ���� ���� ������ �Է��ϼ���:");
		scanf("%d  %d",&(stu[i].no),  &stu[i].s.math);
	}
	printf("============================================================\n");
	printf("�л����\n");
	printf("============================================================\n");

	for (int i = 0; i < MAX_STD_CNT; i++) {
		printf("%d  %d�� \n", stu[i].no,  stu[i].s.math);
	}

	//printf("�й� : %d\n", stu[0].no);

	return 0;

}*/