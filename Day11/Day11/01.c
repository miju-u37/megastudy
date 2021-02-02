#include <stdio.h>

int x = 10;		// Data 영역
int y = 20;		// Data 영역

int main_01(void){
	
	int a = 10; // 지역변수
				// stack 영역에 쌓임
	
	int b = 20; // 지역변수
				// stack 영역에 쌓임

	printf("============STACK=============\n");
	printf("a 메모리 주소값 %p, 10진수로 %d\n", &a, &a);
	printf("b 메모리 주소값 %p, 10진수로 %d\n", &b , &b);
	
	printf("============DATA==============\n");
	printf("x 메모리 주소값 %p, 10진수로는 %d\n", &x, &x);
	printf("y 메모리 주소값 %p, 10진수로는 %d\n", &y, &y);

	return 0;
}