#include <stdio.h>

// while, for, do while

// while (조건) { 실행 구문 }
// for ( 할당 ; 조건 ; 증감 ) { 실행 구문 }
// do { 실행 구문 } while( 조건 );

int main_06(void) {

	// while문 예제
	int i = 0;

	while (i < 10) {

		printf("i=%d\n", i);

		i++;
	}

	// do while문 예제
	printf("\n\n");

	// i == 10
	i = 0;
	
	do {

		printf("i=%d\n", i);
		i++;

	} while (i < 10);

	// for문 예제
	
	printf("\n\n");

	for (i = 0; i < 1 ; i++) {

		printf("i=%d\n", i);
	
	}

	// 위에꺼랑 같은 여러 예제
	/*
	int b = 0;
	for (;;) {
		if (b >= 10) break;
		printf("b=%d\n", b);
		printf("b=%d\n", b);
		b++;
	}
	*/

	i = 0;
	// break 예제
	for (; i <= 100; i++) {
		printf("i=%d\n", i);
		if (i == 51) break;
	}

	//continue
	for (i = 0; i <= 100; i++) {
		if (i >= 30 && i <= 50) continue;
		printf("i = %d\n", i);
	}

	printf("i의 최종값은 %d입니다.\n", i);

	return 0;
}