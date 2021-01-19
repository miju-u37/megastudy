#include <stdio.h> 

// 삼항연산자
// 조건문 ?  참일 때 : 거짓일 때

int main_05(void) {

	int num = 0, num2 = 1;
	int result = num > num2 ?	10 : -1;

	/* if else로 쓰일 때, 위랑 같은 뜻
	if (num > num2) {
		result = 10;
	}
	else {
		result = -1;
	}
	*/

	printf("%d\n\n", result);

	return 0;

}