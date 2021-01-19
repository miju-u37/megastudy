#include <stdio.h> 

int main(void) {

	for (int x = 1; x <= 9; x++) {

		printf("\n-----%´Ü-----\n", x);

		for (int y = 1; y <= 9; y++) {

			printf("%d x %d = %d\n", x, y, x * y);

		}
		printf("\n");
	}

	return 0;
}