// char_arr_string.c
#include <stdio.h> 

int strStringLength(char name[]);

int main_03(void) {


	char name[1000] = "HELLO";
	int size = strStringLength(name);

	'\0'; // ���ڿ��� ���̴�.
	printf("���ڿ��� ���̴� %d �Դϴ�.", size);
	return 0;
}

// �ݺ������� ���ڿ��� ���̸� �˾Ƴ��� �����ض�.
int strStringLength(char name[]) {
	
	//int max = sizeof(name) / sizeof(char);
	int length = 0; // ���ڿ��� ����
	for (; name[length] != '\0'; length++) {}
	return length;




	/*
	int length = 1; // ���ڿ��� ����
	// '\0' ���ڿ��� ���� �׻� NULL(\0)

	for (int i = 0; i < max; i++) {
		if (name[i] == '\0') break;
		length++;
	}

	return length;
	*/

}