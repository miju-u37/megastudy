#include <stdio.h>

int main_03(void) {
	// +&c	0x008ffa4f  <문자열에 잘못된 문자가 있습니다.>	char *

	char c = 'A';
	char* cp = 'NULL';

	cp = &c; 
	
	printf("%p %p %p\n", &c, cp, &cp);

	//-- 역참조 연산(*)
	*cp = 'D';

	printf("%c %c\n", c, *cp);

	return 0;

}