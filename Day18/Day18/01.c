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

	printf("=========Call By Value ���� ==========\n");
	func(p); // {10,20} ���� ����  -> 100, 4
	printf("%d, %d\n", p.x, p.y); //? 10, 20

	printf("=========Call By Value ���� ==========\n");
	funcCallByRefer(&p); // 0x100; -> 100, 4
	printf("%d, %d\n", p.x, p.y); // -> 100, 4

	return 0;

}

void func(struct point call) {
	// call 0x400 ���� ���� ( �� ���� )
	// call.x = 10; call.y = 20
	call.x *= 10;
	call.y /= 5;
	printf("%d, %d\n", call.x, call.y); //100, 4

	//-- �Լ��� ������ call ������ ������ �޸𸮿��� ����
}

void funcCallByRefer(struct point* call) {
	// 1�� ���
	// (*call).x =10;
	// (*call).y /= 5;
	// 2�� ���
	// ����ü / ����ü �����ͺ����϶� ����ϴ� ������ ->
	call->x *= 10; // (*�����ͺ���).x
	call->y /= 5;
	printf("%d, %d\n", call->x, (*call).y);

	//--> call ������ ������ �����
}