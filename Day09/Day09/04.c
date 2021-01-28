#include <stdio.h>

// 지역변수, 전역변수
// { }

int name = 10;

void func_A();

int main_04(void) {

	int a = 0;
	int name = -10;
	printf("name의 값 : %d\n", name);
	func_A();
	printf("name의 값 : %d\n", name);
	return 0;
}

void func_A() {

	int a = 10;
	int b = 20;
	name = 100;

	printf("func_A() 함수의 aaa값 : %d\n", a);
	printf("func_A() 함수의 bbb값 : %d\n", b);
	//return;
}