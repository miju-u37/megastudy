#include <stdio.h>
#include<string.h>

int main_02(void) {

	// ������Ÿ�� * ������ = �Ҵ�
	// ������ �ּҰ� ���Ҷ��� &������
	char* cp = NULL;
	int* ip = NULL; // -- 0 �� ������
	double* dp = 0;

	char c = 'C';
	int i = 10;
	double d = 2.01;

	cp = &c;	// c��� ������ �ִ� �޸� �ּҰ� �����Ͷ�  ( & --> �ּҰ� )
	ip = &i;
	dp = &d;


	// -- 4bytes
	printf("char* cp�� ũ�� = %d\n", sizeof(cp));
	printf("int* ip�� ũ�� = %d\n", sizeof(ip));
	printf("double* dp�� ũ�� = %d\n", sizeof(dp));

	printf("\n\n");

	printf("char* cp�� ũ�� = %p / char c �ּҰ� = %p\n",cp, &c);
	printf("int* ip�� ũ�� = %p, / int i �� �ּҰ� = %p\n", ip, &i);
	printf("double* dp�� ũ�� = %p,/ double d �� �ּҰ� = %p\n",dp, &d);


	return 0;
}