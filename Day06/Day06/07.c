//--- MS C������ ��� ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main_quiz(void) {

	srand(time(NULL)); //-- ������ �ʱ�ȭ
	int result = rand() % 100 + 1; // ������ �����ϱ�( 1 ~ 100)
	int chance = 10; //10������ �����
	int answer = 0; //����ڰ� �Է��ϴ� ��

	while (1) {

		chance--;

		printf("���ڸ� �����~~ : ");
		scanf("%d", &answer);

		if (result > answer) {
			printf("UP!\n");
		}
		else if (result < answer) {
			printf("DOWN!! \n");
		} else if (result == answer) {
			// ������ ���� ���
			printf("������ ������ϴ�.");
			break;
		}

		// change(��ȸ)�� �� �� ��� break;
		if (chance == 0) {
			printf("���� %d�Դϴ�. �����ϼ̳׿�", result);
			break;
		}
	}
	return 0;
}