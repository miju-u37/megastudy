#include <stdio.h>

// a�� ���� ������, a ~ z, b�� ���� ������, b ~ z ���
// 1. ���� �ҹ��ڸ� ���� a(97) ~ z(122) --> ASCII�ڵ�  97<= a <= 122
// if else ���
// 2. �Էµ� �ҹ��ڸ� �������� , z������ ����Ѵ� ex) �Է°� z --> ��°� z
// for, while, do while

void printChar(char seed);

int main(void) {
	printChar('d');
	return 0;
}


void printChar(char seed) { // seed ����� �Է°�
	
	if(seed >=97 && seed <= 122 ) { // �Է¹��ڰ� 97 �̻� 122������ ��
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
	}
	else {
		printf("�Է��Ͻ� ���� ���� �ҹ��ڰ� �ƴմϴ�.\n\n");
	}
}