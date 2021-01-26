#include <stdio.h>

int main_03(void) {

	int arrPoint[] = { 87, 99, 80 };
	int total = 0;

	for (int i = 0; i < 3; i++) {
		total += arrPoint[i]; // ÃÑÁ¡ ±¸ÇÏ±â
	}

	printf("ÃÑÁ¡ : %d\n", total);
	printf("Æò±Õ :  %.2f Á¡ \n", (float)total / 3);



	return 0;

}