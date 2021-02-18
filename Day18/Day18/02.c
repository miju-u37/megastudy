#include <stdio.h>

// �Լ��� ����� ������ ����ü

struct calc {
	int x;
	int y;
	int(*p_add)(int, int);
	int(*p_addSelf)(struct calc);
};

int add(int a, int b) {
	return a + b;
}

int addSelf(struct calc param) {
	return param.x + param.y;
}

int main_02(void) {

	//�Լ� �����ʹ� ��� ���������?
	// ����Ÿ��(*������)(����);
	//int(*p_add)(int, int); //=add; //-- p_add�� �Լ������� Ÿ���� '������'
	//p_add = add; //-- �Լ������� ������, �Լ��� �ּҰ��� ����.
				// ex) �Լ����� �� ��ü�� �ּҰ�, ���� &add

	struct calc cal;
	cal.x = 10;
	cal.y = 20;
	cal.p_add = add;
	cal.p_addSelf = addSelf;

	int sum = cal.p_add(cal.x, cal.y);
	printf("%d+%d=%d\n", cal.x, cal.y, sum);

	int sum2 = cal.p_addSelf(cal);
	printf("%d+%d=%d\n", cal.x, cal.y, sum);

	return 0;

}

	
