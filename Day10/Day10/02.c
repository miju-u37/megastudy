// char_arr_string.c
#include <stdio.h> 

int main_02(void) {

	char name[10]; // char 1byte 방이 10개니까 1*10 = 10 bytes 공간이
				  // 연속적으로 생긴다.

	name[0] = 'H';
	name[1] = 'E';
	name[2] = 'L';
	name[3] = 'L';
	name[4] = 'O';
	name[5] = '\0'; // null 뜻 함

	char name_a[10] = { 'H','E','L','L','O', };
	char name_b[] = { 'H','E','L','L','O', '\0' };
	char name_c[] = "HELLO";

	int size = sizeof(name_c);

	printf("%s\n", name_c);
	printf("name_c[]의 크기는 %d\n", size);


	return 0;
}