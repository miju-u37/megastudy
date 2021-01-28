#include <stdio.h>

// a란 값을 넣으면, a ~ z, b란 값을 넣으면, b ~ z 출력
// 1. 영문 소문자만 가능 a(97) ~ z(122) --> ASCII코드  97<= a <= 122
// if else 사용
// 2. 입력된 소문자를 시작으로 , z까지만 출력한다 ex) 입력값 z --> 출력값 z
// for, while, do while

void printChar(char seed);

int main(void) {
	printChar('d');
	return 0;
}


void printChar(char seed) { // seed 사용자 입력값
	
	if(seed >=97 && seed <= 122 ) { // 입력문자가 97 이상 122이하일 때
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
	}
	else {
		printf("입력하신 값이 영문 소문자가 아닙니다.\n\n");
	}
}