#include <stdio.h>

struct std {
	char hakno[10];
	char name[20];
	double height;
};

int main(void) {

	struct std stu = { '20210001',"ȫ�浿", 170 };
	struct std* p1 = NULL;

	int a = 10;
	int* b = &a; // �Ϲ� ������ ���� �� �Ҵ�

	p1 = &stu;

	printf("%s %s %lf\n", stu.hakno, stu.name, stu.height);
	// 1.������ ����Ͻð�, ������ ���� p1�� ���ؼ� stu�� ����� ����� ������
	printf("%s %s %lf\n", (*p1).hakno, (*p1).name, (*p1).height);		
	//( *����ü�����ͺ���).��� == ����ü�����ͺ���->���


	// 2. p1 ������ ������ �̿��ؼ�, stu�� ������� ����ϼ��� �����ڴ� -> ���
	printf("%s %s %lf\n", p1->hakno, p1->name, p1->height);

	return 0;

}