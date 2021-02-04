#include <stdio.h>

int main_01(void) {

	int arr[5][5]; // 1. 방이 몇 개? 25		2. 메모리에 몇 바이트? 100bytes

	// 위의 변수에 값을 넣은 로직이 있음.

	//int a[] = { 10,12,13 };
	//printf("%d %d %d %d\n", a[0], *a, a[0] * (a + 1));

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//arr[j][i] = 1 + j + ( i * 5 ); //포인터 연산으로 바꿔보기
			*(*(arr+j)+i)=1 + j + ( i * 5 );
		}
	}

	//	출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//printf("%d\t", //arr[j][i]); 포인터 연산으로 바꿔라
			printf("%d\t", *(*(arr + i) + j));

		}
		printf("\n");
	}

	return 0;
}