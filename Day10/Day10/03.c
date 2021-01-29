// char_arr_string.c
#include <stdio.h> 

int strStringLength(char name[]);

int main_03(void) {


	char name[1000] = "HELLO";
	int size = strStringLength(name);

	'\0'; // 문자열의 끝이다.
	printf("문자열의 길이는 %d 입니다.", size);
	return 0;
}

// 반복문으로 문자열의 길이를 알아내서 리턴해라.
int strStringLength(char name[]) {
	
	//int max = sizeof(name) / sizeof(char);
	int length = 0; // 문자열의 길이
	for (; name[length] != '\0'; length++) {}
	return length;




	/*
	int length = 1; // 문자열의 길이
	// '\0' 문자열의 끝은 항상 NULL(\0)

	for (int i = 0; i < max; i++) {
		if (name[i] == '\0') break;
		length++;
	}

	return length;
	*/

}