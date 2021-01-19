#include <stdio.h> {
// scanf_s

int main_02(void) {

	int num = 0;
	printf("숫자를 입력하세요. : ");
	scanf_s("%d", &num);


	// 가독성이 높음
	if (num % 2 == 0) {
		printf("%d는 짝수입니다. \n\n", num);
	}
	else {
		printf("%d는 홀수입니다. \n\n", num);
	}

	//연산을 한번 덜 함
	if (num % 2) {
		printf("%d는 홀수입니다. \n\n", num);
	}
	else {
		printf("%d는 짝수입니다. \n\n", num);
	}

	return 0;
}