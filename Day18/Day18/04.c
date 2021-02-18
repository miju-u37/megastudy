#include <stdio.h>

struct student {	// 12bytes
	int a;	
	char b;	
	int c;	
};

// 공용체 : union 공용체이름( 데이터타입 이름 ) { 정의 부 }
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

	printf("구조체 student 크기 : %d, 공용체 student_u 크기 %d\n\n"
		, sizeof(s), sizeof(su));
	printf("====공용체===\n");
	printf("%d, %d, %d\n", su.a, su.b, su.c);
	printf("%p, %p, %p\n", &su.a, &su.b, &su.c);
	printf("====구조체===\n");
	printf("%d, %d, %d\n", s.a, s.b, s.c);
	printf("%p, %p, %p\n", &s.a, &s.b, &s.c);

	return 0;
}