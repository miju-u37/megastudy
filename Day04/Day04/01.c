#include <stdio.h>

int main(void) {
	
	// 변수 사용방법1
	int age; // 1. 변수선언

	age = 10; // 2. age란 변수에 10이라는 값을 할당한다.

	// 변수 사용방법2
	int age2 = 10; // 변수선언과 할당(대입)을 동시에 하는 것

	// 변수선언과 할당 동시에 (여러개)
	int a = 10;
	int b = 20;
	int c = 30;

	//-- 변수 선언
	int a, b, c;

	//-- 변수 할당
	a = 10;
	b = 20;
	c = 30;

	//-- 변수 선언과 할당 동시에
	int a_1 = 10, b_2 = 20, c_2 = 30;

	printf("%d\n\n", age);

	return 0;
}