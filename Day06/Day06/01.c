#include <stdio.h>

//�������
//if ~ else (if else if)
//switch

/*
*	// ���ǽ��̶�� ���� ������� true, false ( 1,0 )

	--if ~ else

	if ( ���ǽ� / condition ) {
	
	// '��' �϶� ���� �ȴ�

	} else {

	// ' ��'�� �ƴ� �� ( �� �����϶� ��Ȳ)

	}

	if (���ǽ�A) {

	// ���ǽ� A�� ���� �� ����

	} else if (���ǽ�B) {
	// ���ǽ� B�� ���� �� ����

	} else if (���ǽ�C) {
	// ���ǽ� C�� ���� �� ����

	} ... else{
	���ǽ� A,B,C ��� ������ �� 
	}
*/

int main_01(void) {

	char num1 = 10, num2 = 9;

	if (num1 > num2) {
		printf("%d�� %d���� Ů�ϴ�.", num1, num2);
	}
	else {
		printf("%d�� %d���� �۽��ϴ�.", num1, num2);
	}

	return 0;

}