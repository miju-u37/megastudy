#include <stdio.h>

int main(void) {

	int num = 10;
	char c = 'A'; 

	int* np = &num;
	char* cp = &c;

	void* ptr = NULL;
	
	ptr = np;

	printf("num=%d\n", *np);
	printf("num by (int *)ptr=%d\n", *(int *)ptr);		
	printf("num by (char *)ptr=%d\n", *(char *)ptr);		

	//ptr = np;
	//ptr = cp;
	//np = ptr;
	//cp = ptr;

	return 0;
}