#include <stdio.h>
#include<string.h>

int main_02(void) {

	// 데이터타입 * 변수명 = 할당
	// 변수의 주소값 구할때는 &변수명
	char* cp = NULL;
	int* ip = NULL; // -- 0 도 괜찮다
	double* dp = 0;

	char c = 'C';
	int i = 10;
	double d = 2.01;

	cp = &c;	// c라는 변수가 있는 메모리 주소값 가져와라  ( & --> 주소값 )
	ip = &i;
	dp = &d;


	// -- 4bytes
	printf("char* cp의 크기 = %d\n", sizeof(cp));
	printf("int* ip의 크기 = %d\n", sizeof(ip));
	printf("double* dp의 크기 = %d\n", sizeof(dp));

	printf("\n\n");

	printf("char* cp의 크기 = %p / char c 주소값 = %p\n",cp, &c);
	printf("int* ip의 크기 = %p, / int i 의 주소값 = %p\n", ip, &i);
	printf("double* dp의 크기 = %p,/ double d 의 주소값 = %p\n",dp, &d);


	return 0;
}