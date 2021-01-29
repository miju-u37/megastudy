#include <stdio.h>

// 1. 함수의 구조 / 문법
// [리턴데이터타입] [함수명] ([인자들...]) { // 함수구현부 }
// 2. 함수는 "함수원형"도 존재할 수 있다.
// [리턴데이터타입] [함수명] ([인자들...]); // <-- 함수원형
int add(int a, int b); // 함수원형

//-----------------------------------------------------------
// a. 리턴값이 있는 함수
// b. 리턴값이 없는 함수
// ex a) char minus ( char a, char b );
// ex b) void minux ( char a, char b );
//-----------------------------------------------------------

int a = 10; //전역변수 ( 전역변수의 범위는 이 페이지 전 범위이다.--> 페이지의 전부 )

int add_all() {
	 a++;
}

void printA() {
	add_all();
	add_all();
	printf("printA =%d\n", a);
}

void all_local() { // 지역변수는 중괄호에서만 유효, 밑에서 호출 할 시 사라짐
	int a = 20;
	printf("all_local = %d\n", a++);
}

int add_plus(int x, int y);	// 함수원형 선언
void print_add_plus(int x, int y);		// 함수원형 선언

int main_01(void) {

	add(0, 10); // 함수호출
	add_all(); // a++; 랑 같은 뜻 --> 치환 해준다고 생각
	add_all(); // a++;
	add_all(); // a++;
	add_all(); // a++;
	add_all(); // a++;
	
	printf("%d\n", a); // 15
	printA(); // 17

	add_all(); // 20
	add_all(); // 20
	add_all(); // 20
	add_all(); // 20

	// --중괄호
	{ // block (함수 블록 or 일반 블록)
		int b = 100;
		printf("b = %d\n", b);
	}

	// printf("b = %d\n", b); 에러; 지역변수 b를 찾을 수 없다.

	// -- 반복문, if ~ else, switch
	//int ab; // 선언

	while (1) {

		// 지역설정
		int ab = 1000;

	}

	// printf("ab=%d\n",  ab);

	for (int i = 0; i < 10; i++) {
		printf("%d", i); // 접근가능
	}

	//printf("%d", i)  접근불가능

	int result = add_plus(10, 11); // x + y; 치환된다.
	
	return 0;
}

int add(int a, int b) { // 함수정의 ( 함수정의와 원형의 인자까지 맞춰주는게 좋다.)

	printf("---");
	return 0;
}

int add_plus(int x, int y) {
	return x + y;
}

void print_add_plus(int x, int y) {
	printf("%d+%d=%d\n", x, y, add_plus(x, y));
}