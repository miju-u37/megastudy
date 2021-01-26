#include <stdio.h>

int main_01(void) { // Application Starting Point 
				// 하나의 프로젝트(솔루션)에 메인함수는 반드시 하나만

	// 변수 선언 
	// [데이터 타입] [변수명]
	// ex) int age = 10;

	// 상수 선언
	// connst [데이터타입] [상수명]
	// ex) const int age = 10;

	// #define  전처리기
	// #define [상수명] 값
	// #define PI 3.14

	//-- 변수연습

	int age = 10; // -- 변수를 선언하고 10으로 초기화 한다.(10으로 할당)
	const int year = 2021; //-- 상수를 선언하고, 2021을 초기화 한다.

	age = 20; //-- 변수는 할당된 값을 변경 가능하다.
	//year = 2019; //-- 상수의 경우는 할당된 값을 변경할 수 없다.

//	printf("age = %d\n", age);
//	printf("PI = %d\n", PI);

	//-- 데이터 타입의 경우는 정수형/실수형이 존재합니다.
	// char, short, int, long ... 정수형
	// double, float, long double ... 실수형
	// boolean -> true, false : Ansi C의 경우에는 bool 데이터타입이 X
	// bool이 없는 경우는 0,1로 거짓과 참을 구분한다.
	// 0 = 거짓, 1 = 참 ( 0이 아닌 모든 숫자는 참입니다. )

	// 연산자
	// 산술연산 +, -, /, * ( a + b, a - b, a / b, a * b )
	// 단항 ++, --, +=, -=, *=, /=, %= ..
	// 할당연산은 = ex) int a =10; -> 인티저 변수 a에 10이라는 수를 넣는다.
	// 비트연산은 &, |, ^, ~ (not)
	// 쉬프트 연산은 << >>

	// 논리표현식(연산) &&, || (&, |), !(not의 의미로 true -> false, false -> true)
	// 조건제어문
	// if ~ else / if ~ else if ~ else ...
	// switch - case - break;

	if (1) { // ( 조건 ) 부분이 참일 때 실행된다.
		// 참일 때 실행
	}
	else {
		//-- ( 조건 ) 부분이 거짓일 때 실행
	}

	if (1) {
	}
	else if (1) {
	}
	else
	{}

	//-- 삼항연산자
	// a ? b : c;
	// a는 조건 (Condition) ? 참 : 거짓 c;
	char condition = 10 >= 1 ? 5 : 1;
	printf("condition=%d\n", condition);

	//-- 반보문
	// while, do while, for
	/*
	while (조건) {
		조건이 참일 때 까지 실행 -> 조건이 거짓이면 실행이 안됨
	}
	*/

	int i = 10;
	while (i > 0) {
		printf("i=%d\n",--i);
	}

	/*
	
	do {
		// 실행 구문
	} while( 조건 )
	
	-- while문과 차이점은, 최소 한번은 실행된다.
	*/

	do {
		printf(" 최소 한번은 실행된다.\n");
	} while (0);

	/*
		for( 변수값 할당; 조건비교; 증감 ) {
		// 조건이 참일 때 까지 실행
	}
	*/

	/*
	for ( j = 0; j < 10; j++) {}

	int m = 0;
	for (; m < 10; m++){}

	for (; m < 10; ) {
		m++;
	}

	for (;;) {
		if (m < 10) break;
		m++;
	}
	*/

	// 반복문에서 사용하는 continue, break

	/*int x = 10;
	while (1) {

		if (x <= 0) break;
		x ==  // x = x - 1

	}
	
	//-- break는 block({})을 탈출하여, 다음 라인으로 이동
	
	x = 10;
	while (x > 0) {

		if (x % 2 == 0) break; // 조건 제어구문으로  이동 
							   // ( continue 밑에 있는 구문은 실행되지 않는다.)
		x --; // x = x - 1

	}
	*/



	return 0;
}