#include <stdio.h>

struct std {
	char hakno[10];
	char name[20];
	double height;
};

int main(void) {

	struct std stu = { '20210001',"홍길동", 170 };
	struct std* p1 = NULL;

	int a = 10;
	int* b = &a; // 일반 포인터 선언 및 할당

	p1 = &stu;

	printf("%s %s %lf\n", stu.hakno, stu.name, stu.height);
	// 1.연산을 사용하시고, 포인터 변수 p1을 통해서 stu의 멤버를 출력해 보세요
	printf("%s %s %lf\n", (*p1).hakno, (*p1).name, (*p1).height);		
	//( *구조체포인터변수).멤버 == 구조체포인터변수->멤버


	// 2. p1 포인터 변수를 이용해서, stu의 멤버들을 출력하세요 연산자는 -> 사용
	printf("%s %s %lf\n", p1->hakno, p1->name, p1->height);

	return 0;

}