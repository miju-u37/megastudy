#include <stdio.h>

// 함수선언부
int multiple(int a, int b);
int _add(int a, int b);
int call_multiple(int x, int y, int(*fp)(int, int));

int main_02(void) {

	int x = 10, y = 20;
	int c = call_multiple(x, y, multiple);	// 사용
	printf("%d\n", c);

	c = call_multiple(x, y, _add);
	printf("%d\n", c);

	return 0;
}

int _add(int x, int y) {
	return x + y;
}

int multiple(int a, int b) {
	return a * b;
}

int call_multiple(int x, int y, int (*fp)(int, int)) {
	return fp(x, y);
}