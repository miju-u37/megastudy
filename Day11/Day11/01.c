#include <stdio.h>

int x = 10;		// Data ����
int y = 20;		// Data ����

int main_01(void){
	
	int a = 10; // ��������
				// stack ������ ����
	
	int b = 20; // ��������
				// stack ������ ����

	printf("============STACK=============\n");
	printf("a �޸� �ּҰ� %p, 10������ %d\n", &a, &a);
	printf("b �޸� �ּҰ� %p, 10������ %d\n", &b , &b);
	
	printf("============DATA==============\n");
	printf("x �޸� �ּҰ� %p, 10�����δ� %d\n", &x, &x);
	printf("y �޸� �ּҰ� %p, 10�����δ� %d\n", &y, &y);

	return 0;
}