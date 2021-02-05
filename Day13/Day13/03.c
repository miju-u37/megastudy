#include <stdio.h>

void add(int, int, int);
//int getVal();
//void printX(int, int, int, int (*fp)());

int main_03(void) {

	int* a ;	// 일반 포인터 변수 선언할 때
	int b = 10;
				// 데이터타입 *변수명 = 초기화;
	// printf(*a);
	a = NULL;
	a = &b; // 변수의 주소값이 들어간다


	// 함수 포인터는 어떻게 선언하느냐?
	// 데이터타입(리턴타입) (*변수명-함수명) ( 인자 ) = 초기화;
	void (*func)(int, int, int);
	int (*func2)();

	func = NULL;
	func2 = NULL;	

	func = add;			// &add랑  같은 뜻
	//func2 = getVal;		// &getVal 같은 뜻


	char* z = NULL;

	//printX(1, 2, 3, func2);	// 가능 (func2)

	return 0;
}
