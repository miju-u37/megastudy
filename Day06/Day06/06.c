#include <stdio.h>

// while, for, do while

// while (����) { ���� ���� }
// for ( �Ҵ� ; ���� ; ���� ) { ���� ���� }
// do { ���� ���� } while( ���� );

int main_06(void) {

	// while�� ����
	int i = 0;

	while (i < 10) {

		printf("i=%d\n", i);

		i++;
	}

	// do while�� ����
	printf("\n\n");

	// i == 10
	i = 0;
	
	do {

		printf("i=%d\n", i);
		i++;

	} while (i < 10);

	// for�� ����
	
	printf("\n\n");

	for (i = 0; i < 1 ; i++) {

		printf("i=%d\n", i);
	
	}

	// �������� ���� ���� ����
	/*
	int b = 0;
	for (;;) {
		if (b >= 10) break;
		printf("b=%d\n", b);
		printf("b=%d\n", b);
		b++;
	}
	*/

	i = 0;
	// break ����
	for (; i <= 100; i++) {
		printf("i=%d\n", i);
		if (i == 51) break;
	}

	//continue
	for (i = 0; i <= 100; i++) {
		if (i >= 30 && i <= 50) continue;
		printf("i = %d\n", i);
	}

	printf("i�� �������� %d�Դϴ�.\n", i);

	return 0;
}