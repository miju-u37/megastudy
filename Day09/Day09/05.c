#include <stdio.h>


void printResult(int total) {
	if (total < 10) {
		pritnf("main() ��Ͼ��� ���� total�� ���� %d �Դϴ�. \n", total);
	}
}

int main(void) {

	int i = 0;
	int total = 0;

	for (i = 1; i < 3; i++) {
		total += 1;
		printf("for ��Ͼ��� ���� total�� ���� %d �Դϴ�. \n", total);
	}

	printResult(total);
	return 0;
}