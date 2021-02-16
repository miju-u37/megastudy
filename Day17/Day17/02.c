/*#include <stdio.h>

struct score {
	int math; // 수학점수
	int eng; // 영어점수
	int total; //총점
	double average; // 평균

};

struct student {
	int no; // 학번
	char* name; // 학생이름
	struct score s; // score 구조체 타입의 멤버 선언
};

int main_02(void) {

	struct student stu;	// 학생 구조체 하나 생성(학생 한명 생성)

	stu.no = 2021010001;
	stu.name = "홍길동";
	stu.s.math = 30;
	stu.s.eng = 50;
	stu.s.total = stu.s.math + stu.s.eng;
	stu.s.average = stu.s.total / 2;

	printf("학번 : %d\n", stu.no);
	printf("이름 : %s\n", stu.name);
	printf("총점 : %d\n", stu.s.total);
	printf("평균 : %lf\n", stu.s.average);

	
	return 0;

}*/