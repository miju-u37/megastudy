#include <stdio.h>


// a + b
// a += b a += 1;
//++, --
int main_04(void) {
	
	int a = 10;

	printf("%d\n", ++a); //11
	printf("%d\n", a++); //11
	printf("%d\n", a); //12

	/*
	a++; // a = a + 1 (11) +=
	++a; // a = a + 1 (12) +=
	--a; // a = a - 1 (11) -=
	a--; // a = a - 1 (10) =-
	*/

	return 0;
}