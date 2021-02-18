#include <stdio.h>

// 함수를 멤버로 가지는 구조체

struct calc {
	int x;
	int y;
	int(*p_add)(int, int);
	int(*p_addSelf)(struct calc);
};

int add(int a, int b) {
	return a + b;
}

int addSelf(struct calc param) {
	return param.x + param.y;
}

int main_02(void) {

	//함수 포인터는 어떻게 만들었나요?
	// 리턴타입(*변수명)(인자);
	//int(*p_add)(int, int); //=add; //-- p_add는 함수포인터 타입의 '변수명'
	//p_add = add; //-- 함수포인터 변수에, 함수의 주소값이 들어간다.
				// ex) 함수명은 그 자체가 주소값, 따라서 &add

	struct calc cal;
	cal.x = 10;
	cal.y = 20;
	cal.p_add = add;
	cal.p_addSelf = addSelf;

	int sum = cal.p_add(cal.x, cal.y);
	printf("%d+%d=%d\n", cal.x, cal.y, sum);

	int sum2 = cal.p_addSelf(cal);
	printf("%d+%d=%d\n", cal.x, cal.y, sum);

	return 0;

}

	
