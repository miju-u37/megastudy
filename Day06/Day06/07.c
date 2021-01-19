//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main_quiz(void) {

	srand(time(NULL)); //-- 랜덤값 초기화
	int result = rand() % 100 + 1; // 랜덤값 생성하기( 1 ~ 100)
	int chance = 10; //10번내에 맞춰라
	int answer = 0; //사용자가 입력하는 값

	while (1) {

		chance--;

		printf("숫자를 맞춰봐~~ : ");
		scanf("%d", &answer);

		if (result > answer) {
			printf("UP!\n");
		}
		else if (result < answer) {
			printf("DOWN!! \n");
		} else if (result == answer) {
			// 정답을 맞춘 경우
			printf("정답을 맞췄습니다.");
			break;
		}

		// change(기회)를 다 쓴 경우 break;
		if (chance == 0) {
			printf("답은 %d입니다. 실패하셨네요", result);
			break;
		}
	}
	return 0;
}