#include <stdio.h>

//-- 10������ �޾Ƽ� 2������ ��ȯ�Ѵ�.

int main(void) {

	char binary[100] = { 0 };
	int input = 0;
	int temp = 0;
	int i = 0;

	printf("2������ ��ȯ�� 10������ �Է��� �ּ��� : ");
	scanf_s("%d", &input);

	temp = input;

	// 2�� ���� �κ�
	while (temp != 0) {
		binary[i] = temp % 2;
		temp /= 2;	// temp = temp / 2
		i++;
	}

	// ������ 0101�� �������� ���� 1010�̴�

	printf("\n��ȯ�� 2������ : " );

	// �� �κ��� ������ ��Ȯ�ϰ� (������)


	// for(int j = 0; i < 4; j++)
	for (int j = i-1; j >= 0 ; j-- ) {
		printf("%d", binary[j]);
	}

	printf("�Դϴ�.\n");

	return 0;

}