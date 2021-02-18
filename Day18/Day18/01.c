#include <stdio.h>
#include "person.h"

struct point {
	int x;
	int y;
};

// Call By Value 
void func(struct point);

// Call By Reference  
void funcCallByRefer(struct point*);

int main_01(void) {

	//struct Person p2 = initPerson();
	//p2.sayHungry();

	struct point p = { 10, 20 }; // 0x100;

	printf("=========Call By Value 예제 ==========\n");
	func(p); // {10,20} 값을 복제  -> 100, 4
	printf("%d, %d\n", p.x, p.y); //? 10, 20

	printf("=========Call By Value 예제 ==========\n");
	funcCallByRefer(&p); // 0x100; -> 100, 4
	printf("%d, %d\n", p.x, p.y); // -> 100, 4

	return 0;

}

void func(struct point call) {
	// call 0x400 새로 생김 ( 값 복제 )
	// call.x = 10; call.y = 20
	call.x *= 10;
	call.y /= 5;
	printf("%d, %d\n", call.x, call.y); //100, 4

	//-- 함수가 끝나는 call 변수는 시점에 메모리에서 삭제
}

void funcCallByRefer(struct point* call) {
	// 1번 방법
	// (*call).x =10;
	// (*call).y /= 5;
	// 2번 방법
	// 구조체 / 공용체 포인터변수일때 사용하는 연산자 ->
	call->x *= 10; // (*포인터변수).x
	call->y /= 5;
	printf("%d, %d\n", call->x, (*call).y);

	//--> call 포인터 변수는 사라짐
}