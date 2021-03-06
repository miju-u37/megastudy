#include <stdio.h>

//---------------------------
// 구조체
//---------------------------

/*
struct구조체명 {
// 정의문
// --> 멤버 (member)
};
*/

struct group {// 구조체 데이터 타입선언
	int a; //-- 멤버
	int b; //-- 멤버
	// 구조체의 멤버가 될 수 있는것들
	// 1. 일반 변수 (int, char,double,float...)
	// 2. 포인터변수 (~~, void*)
	// 3. 구조체변수
	// 4. 함수 포인터(이놈은 변수인가요?)--> 변수명은 함수이름
};

int main_01(void) {

	//-- 2. 구조체 초기화법(선언과 동시에 초기화)
	struct group g1 = { 20,30 }; //-- struct group 타입의 g1 변수를 선언한다.
	// 멤버들을 접근할때는 연산자로 접근합니다.

	//-- 1. 구조체 초기화 및 멤버변수에 값 할당법
	//g1.a = 10;
	//g1.b = 20;
	
	printf("%d, %d\n", g1.a, g1.b);

	return 0;

}