#include <stdio.h>

// 1. �Լ������
// ��ȯ�ڷ���(������Ÿ��) �Լ��� (���ڵ�..)
// 2. �Լ� ������
// ��ȯ�ڷ���(������Ÿ��) (*�����ͺ�����) (���ڵ�...)

void add(int x, int y);
int add_print(void(*p)(int, int));

int main_01(void) {

	int x = 1, y = 10;
	add(x, y);	// �Լ� ȣ��

	void (*fp)(int, int); //-- �Լ������� ����

	fp = NULL;

	printf("add�Լ��� �ּ� : %p %p\n", add, &add);
	printf("�Լ������� fp�� ����Ű�� �ּ� %p\n", fp);	// (*fp)

	fp = add;	// �Լ��̸��� �ִ´� (�Լ��̸��� �� �Լ��� �޸� �ּҸ� ������)
	fp(x, y);	// �Լ������� ȣ��
	
	printf("�Լ� add�� �ּ� %p\n", add);
	printf("�Լ������� fp�� �ּ� %p\n", &fp);
	printf("�Լ������� fp�� ����Ű�� �ּ� %p\n", fp);	// (*fp)

	//-- add_print(); ȣ���� ������

	add_print(fp);

	int a = 20, b = 30;
	add(a, b);

	return 0;
}

void add(int x, int y) {
	printf("%d + %d = %d\n", x, y, x + y);
}

int add_print(void(*p)(int, int)) {
	printf("========�Լ��� ���ڷ� �Լ��� �ѱ�� ==========\n\n");
	p(20, 30);
}