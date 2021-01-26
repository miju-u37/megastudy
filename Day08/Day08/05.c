#include <stdio.h>

//-- 10진수를 받아서 2진수로 변환한다.

int main(void) {

	char binary[100] = { 0 };
	int input = 0;
	int temp = 0;
	int i = 0;

	printf("2진수를 변환할 10진수를 입력해 주세요 : ");
	scanf_s("%d", &input);

	temp = input;

	// 2진 연산 부분
	while (temp != 0) {
		binary[i] = temp % 2;
		temp /= 2;	// temp = temp / 2
		i++;
	}

	// 실제로 0101이 나오지만 답은 1010이다

	printf("\n변환된 2진수는 : " );

	// 이 부분을 수정해 정확하게 (수정본)


	// for(int j = 0; i < 4; j++)
	for (int j = i-1; j >= 0 ; j-- ) {
		printf("%d", binary[j]);
	}

	printf("입니다.\n");

	return 0;

}