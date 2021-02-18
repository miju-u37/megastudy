#include <stdio.h>

struct student {	// 12bytes
	int a;	
	char b;	
	int c;	
};

// ����ü : union ����ü�̸�( ������Ÿ�� �̸� ) { ���� �� }
union student_u {
	int a;
	char b;
	int c;
};

int main(void) {

	struct student s;
	union student_u su;

	s.a = 10;
	s.b = 20;
	s.c = 30;
	su.a = 10;

	printf("����ü student ũ�� : %d, ����ü student_u ũ�� %d\n\n"
		, sizeof(s), sizeof(su));
	printf("====����ü===\n");
	printf("%d, %d, %d\n", su.a, su.b, su.c);
	printf("%p, %p, %p\n", &su.a, &su.b, &su.c);
	printf("====����ü===\n");
	printf("%d, %d, %d\n", s.a, s.b, s.c);
	printf("%p, %p, %p\n", &s.a, &s.b, &s.c);

	return 0;
}