#include <stdio.h>

int main_03(void) {
	// +&c	0x008ffa4f  <���ڿ��� �߸��� ���ڰ� �ֽ��ϴ�.>	char *

	char c = 'A';
	char* cp = 'NULL';

	cp = &c; 
	
	printf("%p %p %p\n", &c, cp, &cp);

	//-- ������ ����(*)
	*cp = 'D';

	printf("%c %c\n", c, *cp);

	return 0;

}