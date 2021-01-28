#include <stdio.h>

//-- 무슨함수가 필요할까
int int_add(int x, int y); //int 타입을 리턴하고, 함수명은 int_add, 인자는 int  두개를 받는다.
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);
void printBar(); // -- 분단선을 출력하는 함수

// 스타팅 포인트
int main_02(void) {

	printBar(); //-- 함수호출방식
    printf("\t 간단한 계산기");
	printBar();

	int num1 = 0, num2 = 0;
	printf("두 개의 숫자를 입력해 주세요. : ");
	scanf_s("%d %d", &num1, &num2);

	printBar(); //-- 분단점 놓기
	printf("%d + %d = %d\n", num1, num2, int_add(num1, num2));
	printf("%d - %d = %d\n", num1, num2, int_minus(num1, num2));
	printf("%d * %d = %d\n", num1, num2, int_multi(num1, num2));
	printf("%d / %d = %d\n", num1, num2, int_divide(num1, num2));


	return 0;

}

// 2. 함수 구현부
int int_add(int x, int y) {
	return x + y;
}

int int_minus(int x, int y) {
	return x - y;
}

int int_multi(int x, int y) {
	return x * y;
}

int int_divide(int x, int y) {
	return x / y;
}

void printBar() {
	printf("========================\n");
}
