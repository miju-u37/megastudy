#include <stdio.h>

// 최대값을 사용자한테 입력을 받고.
// 1부터 ~ 최대값까지 출력
// 최대값부터 1까지 출력
// 1 ~ 최대값 중에 홀수값의 합을 출력
int main_03(void) {

	int input = 0;	// 사용자의 입력값을 저장하는 변수
	int sum = 0;	// 홀수의 합을 저장하는 변수

	printf("최대값을 입력해 주십시오. :");
	scanf_s("%d", &input, sizeof(input));	// 사용자로부터 입력을 받아
											// input 변수에 저장

	//ex) 최대 값으로 5를 받았다.
	// 1. 1 ~ 최대값 출력

	for (int i = 1; i <= input; i++) {
		printf("%d\t", i);
	}
	
	printf("\n");

	// 2. 최대값 ~ 1까지 출력

	for (int i = input; i > 0; i--) {
		printf("%d\t", i);
		if (i % 2 == 1) {
			sum += i; //sum = sum + i;
		}
	}

	printf("\n");

	// 3. 1 ~ 최대값 중 홀수들의 합을 출력
	
	/*
	for (int i = 1; i <= input; i++) {
		if (i % 2 == 1) {
			sum += i; //sum = sum + i;
		}
	}
	*/

	printf("\n");

	printf("1부터 %d까지의 숫자들의 합은 %d입니다.", input, sum);

	return 0;
}