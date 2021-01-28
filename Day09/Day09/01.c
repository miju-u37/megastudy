#include <stdio.h>

// �Լ��� ����
// 1. ���ϰ��� �ִ� �Լ�
// 2. ���ϰ��� ���� �Լ�

// ��ȯ(���� ������ Ÿ��) �Լ��� ( ���� )
// �Լ� ��ü (���๮��...)
// }

// void printAdd() {} <-- ��ȯ��(���ϰ�)�� ���� �Լ�
// char returnChar() {} <-- ��ȯ���� �ִ� �Լ�

int add(int x, int y); // <-- �Լ��� ����
int minus(int x, int y);
int multiple(int x, int y);
//int xxx()

void addPrint(int x, int y);
void printAtoZ();

int main_01(void) {

	int a = 10, b = 20;
	int result = a + b;

	printf("�Լ��� = %d\n", result);

	result = add(a, b);

	printf("�Լ��� = %d\n", result);

	addPrint(a, b);

	// �Լ��� ȣ��
	printAtoZ();

	return 0;
}


//-- ������
// A to Z ���� ���
void printAtoZ() {

	for (int i = 65; i <= 90; i++) {
		printf("%c", i);
	}
	printf("\n");
	return;
}

void addPrint(int x, int y) {
	printf("%d+%d=%d\n", x, y, x + y);
}

//��ȯ���� ���ڰ� �ִ� �Լ�
int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiple(int x, int y) {
	return x * y;
}