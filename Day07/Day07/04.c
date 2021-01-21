#include <stdio.h>

// scanf_s 에서는 enter(13)도 인식

int main(void) {

	int floor = 0;
	char command = 0;

	while (1) {

		printf("\n출력할 층수를 입력해 주세요. (홀수) ");
		scanf_s("%d", &floor, sizeof(floor));

		// 1. 층수는 5층 이상

		if (floor < 5) {
			printf("\n층수는 5층 이상이어야 합니다.");
			continue;
		}

		// 2. 층수는 홀수



		// 삼각형 1.

		for (int i = 1; i <= floor; i++) {
			// 1 ~ 5 
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}

		// 삼각형 2.
		// 5층을 넣는다
		/*
		ssss*
		sss**
		ss***
		s****
		*****

		1층 경우 공백 4
		2층 3
		3층 2
		4층 1
		5층 0
		*/

		for (int i = 1; i <= floor; i++) {

			for (int k = 1; k <= floor - i; k++) {
				printf(" ");
			}

			for (int j = 1; j <= i; j++) {
				printf("*");
			}

			printf("\n");
		}

		// 삼각형 3.

		for (int i = 0; i < floor; i++) {

			for (int j = i; j < floor - 1; j++) {
				printf(" ");
			}

			for (int k = 0; k < i * 2 + 1 ; k++) {
				printf("*");
			}

			printf("\n");
		}




		printf("피라미드를 다시 그리겠습니까? ( Y / N )");
		scanf_s(" %c", &command, sizeof(command));
		// 5 + enter(13)
		// enter(13) + char
		if (command == 'N') break;

	}
	

	return 0;
}