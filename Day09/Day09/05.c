#include <stdio.h>


void printResult(int total) {
	if (total < 10) {
		pritnf("main() 블록안의 변수 total의 값은 %d 입니다. \n", total);
	}
}

int main(void) {

	int i = 0;
	int total = 0;

	for (i = 1; i < 3; i++) {
		total += 1;
		printf("for 블록안의 변수 total의 값은 %d 입니다. \n", total);
	}

	printResult(total);
	return 0;
}