#include <stdio.h>

int main_01(void) {

	int arr[5][5]; // 1. ���� �� ��? 25		2. �޸𸮿� �� ����Ʈ? 100bytes

	// ���� ������ ���� ���� ������ ����.

	//int a[] = { 10,12,13 };
	//printf("%d %d %d %d\n", a[0], *a, a[0] * (a + 1));

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//arr[j][i] = 1 + j + ( i * 5 ); //������ �������� �ٲ㺸��
			*(*(arr+j)+i)=1 + j + ( i * 5 );
		}
	}

	//	���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//printf("%d\t", //arr[j][i]); ������ �������� �ٲ��
			printf("%d\t", *(*(arr + i) + j));

		}
		printf("\n");
	}

	return 0;
}