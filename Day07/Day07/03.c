#include <stdio.h>

// �ִ밪�� ��������� �Է��� �ް�.
// 1���� ~ �ִ밪���� ���
// �ִ밪���� 1���� ���
// 1 ~ �ִ밪 �߿� Ȧ������ ���� ���
int main_03(void) {

	int input = 0;	// ������� �Է°��� �����ϴ� ����
	int sum = 0;	// Ȧ���� ���� �����ϴ� ����

	printf("�ִ밪�� �Է��� �ֽʽÿ�. :");
	scanf_s("%d", &input, sizeof(input));	// ����ڷκ��� �Է��� �޾�
											// input ������ ����

	//ex) �ִ� ������ 5�� �޾Ҵ�.
	// 1. 1 ~ �ִ밪 ���

	for (int i = 1; i <= input; i++) {
		printf("%d\t", i);
	}
	
	printf("\n");

	// 2. �ִ밪 ~ 1���� ���

	for (int i = input; i > 0; i--) {
		printf("%d\t", i);
		if (i % 2 == 1) {
			sum += i; //sum = sum + i;
		}
	}

	printf("\n");

	// 3. 1 ~ �ִ밪 �� Ȧ������ ���� ���
	
	/*
	for (int i = 1; i <= input; i++) {
		if (i % 2 == 1) {
			sum += i; //sum = sum + i;
		}
	}
	*/

	printf("\n");

	printf("1���� %d������ ���ڵ��� ���� %d�Դϴ�.", input, sum);

	return 0;
}