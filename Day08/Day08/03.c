#include <stdio.h>

int main_03(void) {

	int arrPoint[] = { 87, 99, 80 };
	int total = 0;

	for (int i = 0; i < 3; i++) {
		total += arrPoint[i]; // ���� ���ϱ�
	}

	printf("���� : %d\n", total);
	printf("��� :  %.2f �� \n", (float)total / 3);



	return 0;

}