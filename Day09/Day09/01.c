#include <stdio.h>

// 함수의 종류
// 1. 리턴값이 있는 함수
// 2. 리턴값이 없는 함수

// 반환(리턴 데이터 타입) 함수명 ( 인자 )
// 함수 몸체 (실행문들...)
// }

// void printAdd() {} <-- 반환값(리턴값)이 없는 함수
// char returnChar() {} <-- 반환값이 있는 함수

int add(int x, int y); // <-- 함수의 원형
int minus(int x, int y);
int multiple(int x, int y);
//int xxx()

void addPrint(int x, int y);
void printAtoZ();

int main_01(void) {

	int a = 10, b = 20;
	int result = a + b;

	printf("함수전 = %d\n", result);

	result = add(a, b);

	printf("함수후 = %d\n", result);

	addPrint(a, b);

	// 함수의 호출
	printAtoZ();

	return 0;
}


//-- 구현부
// A to Z 까지 출력
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

//반환값과 인자가 있는 함수
int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiple(int x, int y) {
	return x * y;
}