#include <stdio.h>

// scanf_s ������ enter(13)�� �ν�

int main(void) {

	int floor = 0;
	char command = 0;

	while (1) {

		printf("\n����� ������ �Է��� �ּ���. (Ȧ��) ");
		scanf_s("%d", &floor, sizeof(floor));

		// 1. ������ 5�� �̻�

		if (floor < 5) {
			printf("\n������ 5�� �̻��̾�� �մϴ�.");
			continue;
		}

		// 2. ������ Ȧ��



		// �ﰢ�� 1.

		for (int i = 1; i <= floor; i++) {
			// 1 ~ 5 
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}

		// �ﰢ�� 2.
		// 5���� �ִ´�
		/*
		ssss*
		sss**
		ss***
		s****
		*****

		1�� ��� ���� 4
		2�� 3
		3�� 2
		4�� 1
		5�� 0
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

		// �ﰢ�� 3.

		for (int i = 0; i < floor; i++) {

			for (int j = i; j < floor - 1; j++) {
				printf(" ");
			}

			for (int k = 0; k < i * 2 + 1 ; k++) {
				printf("*");
			}

			printf("\n");
		}




		printf("�Ƕ�̵带 �ٽ� �׸��ڽ��ϱ�? ( Y / N )");
		scanf_s(" %c", &command, sizeof(command));
		// 5 + enter(13)
		// enter(13) + char
		if (command == 'N') break;

	}
	

	return 0;
}