#include <stdio.h>

//조건제어문
//if ~ else (if else if)
//switch

/*
*	// 조건식이라는 것은 결과값이 true, false ( 1,0 )

	--if ~ else

	if ( 조건식 / condition ) {
	
	// '참' 일때 실행 된다

	} else {

	// ' 참'이 아닐 때 ( 즉 거짓일때 상황)

	}

	if (조건식A) {

	// 조건식 A가 참일 때 실행

	} else if (조건식B) {
	// 조건식 B가 참일 때 실행

	} else if (조건식C) {
	// 조건식 C가 참일 때 실행

	} ... else{
	조건식 A,B,C 모두 거짓일 때 
	}
*/

int main_01(void) {

	char num1 = 10, num2 = 9;

	if (num1 > num2) {
		printf("%d는 %d보다 큽니다.", num1, num2);
	}
	else {
		printf("%d는 %d보다 작습니다.", num1, num2);
	}

	return 0;

}