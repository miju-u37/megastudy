/*#include <stdio.h>

struct score {
	int math; // ��������
	int eng; // ��������
	int total; //����
	double average; // ���

};

struct student {
	int no; // �й�
	char* name; // �л��̸�
	struct score s; // score ����ü Ÿ���� ��� ����
};

int main_02(void) {

	struct student stu;	// �л� ����ü �ϳ� ����(�л� �Ѹ� ����)

	stu.no = 2021010001;
	stu.name = "ȫ�浿";
	stu.s.math = 30;
	stu.s.eng = 50;
	stu.s.total = stu.s.math + stu.s.eng;
	stu.s.average = stu.s.total / 2;

	printf("�й� : %d\n", stu.no);
	printf("�̸� : %s\n", stu.name);
	printf("���� : %d\n", stu.s.total);
	printf("��� : %lf\n", stu.s.average);

	
	return 0;

}*/