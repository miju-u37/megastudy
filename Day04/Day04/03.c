#include <stdio.h>

// 산술연산
// +,-,*,/,%
// 이항연산 (ex)

// 복합산술연산
// +=, -=, *=, /=, %=
int main_03(void) {

	int a = 10;
	a += 1; // a = a + 1;
	a -= 1; // a = a - 1;
	a *= 2; // a = a * 2;
	a /= 2; // a = a / 2;
	a %= 3; // a = a % 3;
	// a 는 1이 됩니다.

	printf("%d\n\n", a);
	return 0;
}