#include <stdio.h>

void add(int, int, int);
//int getVal();
//void printX(int, int, int, int (*fp)());

int main_03(void) {

	int* a ;	// �Ϲ� ������ ���� ������ ��
	int b = 10;
				// ������Ÿ�� *������ = �ʱ�ȭ;
	// printf(*a);
	a = NULL;
	a = &b; // ������ �ּҰ��� ����


	// �Լ� �����ʹ� ��� �����ϴ���?
	// ������Ÿ��(����Ÿ��) (*������-�Լ���) ( ���� ) = �ʱ�ȭ;
	void (*func)(int, int, int);
	int (*func2)();

	func = NULL;
	func2 = NULL;	

	func = add;			// &add��  ���� ��
	//func2 = getVal;		// &getVal ���� ��


	char* z = NULL;

	//printX(1, 2, 3, func2);	// ���� (func2)

	return 0;
}
