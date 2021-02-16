//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

//-- 학생을 여러명을 생성해봅시다.

struct score {
	int math; // 수학점수
	int eng; // 영어점수
	int total; //총점
	double average; // 평균

};

struct student {
	int no; // 학번
	char name[50]; // 학생이름
	struct score s; // score 구조체 타입의 멤버 선언
};

#define MAX_STD_CNT 10

int main_04(void) {

	struct student stu[MAX_STD_CNT];	// 포인터 구조체(배열)
	
	(*stu).no = 10;	//<-- stu[0] --> stu -> no;
	(*(stu+1)).no = 10;

	stu->no = 10; //stu[0]
	(stu + 1)->no = 20; //stu[1]

	// stu[2].no =20;
	// 1. sti[2].no = 20;
	// 2. (*stu).no = 20;
	// 3. stu->no = 20;

	// -- 일반 변수는 -> 못써요?
	//-- 쓸 수 있습니다. 꼬아서
	struct student stu2; // 일반변수
	stu2.no = 20;
	(*(&stu2)).no = 30;
	(&stu2)->no = 30;

	printf("%d\n", stu[0].no);


	return 0;

}