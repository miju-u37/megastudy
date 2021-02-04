# include <stdio.h>

int main_00(void) {

	int a = 10;		// 0x100
	int b = 20;		// 0x200
	int* c = &a;	// 0x500
	// c = 0x1000

	// 1. &c -> 0x500
	// 2. *&c -> *(0x500) -> 0x100


	printf("%d %d %d %d\n", a, *c, *&a, *(*(&c)) );

	return 0;
}