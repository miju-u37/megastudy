#include <stdio.h>

// 1. 함수선언법
// 반환자료형(데이터타입) 함수명 (인자들..)
// 2. 함수 포인터
// 반환자료형(데이터타입) (*포인터변수명) (인자들...)

void add(int x, int y);
int add_print(void(*p)(int, int));

int main_01(void) {

	int x = 1, y = 10;
	add(x, y);	// 함수 호출

	void (*fp)(int, int); //-- 함수포인터 선언

	fp = NULL;

	printf("add함수의 주소 : %p %p\n", add, &add);
	printf("함수포인터 fp가 가르키는 주소 %p\n", fp);	// (*fp)

	fp = add;	// 함수이름을 넣는다 (함수이름은 그 함수의 메모리 주소를 가진다)
	fp(x, y);	// 함수포인터 호출
	
	printf("함수 add의 주소 %p\n", add);
	printf("함수포인터 fp의 주소 %p\n", &fp);
	printf("함수포인터 fp가 가르키는 주소 %p\n", fp);	// (*fp)

	//-- add_print(); 호출해 보세용

	add_print(fp);

	int a = 20, b = 30;
	add(a, b);

	return 0;
}

void add(int x, int y) {
	printf("%d + %d = %d\n", x, y, x + y);
}

int add_print(void(*p)(int, int)) {
	printf("========함수의 인자로 함수를 넘기다 ==========\n\n");
	p(20, 30);
}