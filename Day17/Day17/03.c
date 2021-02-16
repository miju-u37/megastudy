/*
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

int main(void) {

	struct student stu[MAX_STD_CNT];	// 학생 구조체 하나 생성(학생 한명 생성)
	// stu[0].no = 2021010001; //배열접근
	
	for (int i = 0; i < MAX_STD_CNT; i++) {
		printf("학번, 이름, 수학 점수 순으로 입력하세요:");
		scanf("%d  %d",&(stu[i].no),  &stu[i].s.math);
	}
	printf("============================================================\n");
	printf("학생목록\n");
	printf("============================================================\n");

	for (int i = 0; i < MAX_STD_CNT; i++) {
		printf("%d  %d점 \n", stu[i].no,  stu[i].s.math);
	}

	//printf("학번 : %d\n", stu[0].no);

	return 0;

}*/