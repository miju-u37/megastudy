#include <stdio.h>

// ��������, ��������
// { }

int name = 10;

void func_A();

int main_04(void) {

	int a = 0;
	int name = -10;
	printf("name�� �� : %d\n", name);
	func_A();
	printf("name�� �� : %d\n", name);
	return 0;
}

void func_A() {

	int a = 10;
	int b = 20;
	name = 100;

	printf("func_A() �Լ��� aaa�� : %d\n", a);
	printf("func_A() �Լ��� bbb�� : %d\n", b);
	//return;
}