#include <stdio.h>

//-- �����Լ��� �ʿ��ұ�
int int_add(int x, int y); //int Ÿ���� �����ϰ�, �Լ����� int_add, ���ڴ� int  �ΰ��� �޴´�.
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);
void printBar(); // -- �дܼ��� ����ϴ� �Լ�

// ��Ÿ�� ����Ʈ
int main_02(void) {

	printBar(); //-- �Լ�ȣ����
    printf("\t ������ ����");
	printBar();

	int num1 = 0, num2 = 0;
	printf("�� ���� ���ڸ� �Է��� �ּ���. : ");
	scanf_s("%d %d", &num1, &num2);

	printBar(); //-- �д��� ����
	printf("%d + %d = %d\n", num1, num2, int_add(num1, num2));
	printf("%d - %d = %d\n", num1, num2, int_minus(num1, num2));
	printf("%d * %d = %d\n", num1, num2, int_multi(num1, num2));
	printf("%d / %d = %d\n", num1, num2, int_divide(num1, num2));


	return 0;

}

// 2. �Լ� ������
int int_add(int x, int y) {
	return x + y;
}

int int_minus(int x, int y) {
	return x - y;
}

int int_multi(int x, int y) {
	return x * y;
}

int int_divide(int x, int y) {
	return x / y;
}

void printBar() {
	printf("========================\n");
}
