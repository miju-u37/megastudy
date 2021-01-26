# include <stdio.h>

#define MAX_NUM 5
int main_02(void) {

		// 방식1
		/*
		char arrStr[MAX_NUM]; // MAX_NUM크기의 배열이 생성된다.
		arrStr[0] = 'H';
		arrStr[1] = 'E';
		arrStr[2] = 'L';
		arrStr[3] = 'L';
		arrStr[4] = 'O';
		*/

		// 방식 2 - arrStr[5] = {}
		// char arrStr[5] = { 'H', 'E', 'L','L','O' };
		


		// 방식3 - arrStr[] = {};
        //char arrStr[5] = { 'H', 'E', 'L','L','O' };

		//char arrStr[5] = { 'H', 'E', 'L'};
		// arrStr [3],[4]

		/*
		for (int i = 0; i < MAX_NUM; i++) {
			printf("%c", arrStr[i]);
		}
		*/

		return 0;

	}


	