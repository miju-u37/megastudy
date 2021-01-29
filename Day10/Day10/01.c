#include <stdio.h>

// 1. �Լ��� ���� / ����
// [���ϵ�����Ÿ��] [�Լ���] ([���ڵ�...]) { // �Լ������� }
// 2. �Լ��� "�Լ�����"�� ������ �� �ִ�.
// [���ϵ�����Ÿ��] [�Լ���] ([���ڵ�...]); // <-- �Լ�����
int add(int a, int b); // �Լ�����

//-----------------------------------------------------------
// a. ���ϰ��� �ִ� �Լ�
// b. ���ϰ��� ���� �Լ�
// ex a) char minus ( char a, char b );
// ex b) void minux ( char a, char b );
//-----------------------------------------------------------

int a = 10; //�������� ( ���������� ������ �� ������ �� �����̴�.--> �������� ���� )

int add_all() {
	 a++;
}

void printA() {
	add_all();
	add_all();
	printf("printA =%d\n", a);
}

void all_local() { // ���������� �߰�ȣ������ ��ȿ, �ؿ��� ȣ�� �� �� �����
	int a = 20;
	printf("all_local = %d\n", a++);
}

int add_plus(int x, int y);	// �Լ����� ����
void print_add_plus(int x, int y);		// �Լ����� ����

int main_01(void) {

	add(0, 10); // �Լ�ȣ��
	add_all(); // a++; �� ���� �� --> ġȯ ���شٰ� ����
	add_all(); // a++;
	add_all(); // a++;
	add_all(); // a++;
	add_all(); // a++;
	
	printf("%d\n", a); // 15
	printA(); // 17

	add_all(); // 20
	add_all(); // 20
	add_all(); // 20
	add_all(); // 20

	// --�߰�ȣ
	{ // block (�Լ� ��� or �Ϲ� ���)
		int b = 100;
		printf("b = %d\n", b);
	}

	// printf("b = %d\n", b); ����; �������� b�� ã�� �� ����.

	// -- �ݺ���, if ~ else, switch
	//int ab; // ����

	while (1) {

		// ��������
		int ab = 1000;

	}

	// printf("ab=%d\n",  ab);

	for (int i = 0; i < 10; i++) {
		printf("%d", i); // ���ٰ���
	}

	//printf("%d", i)  ���ٺҰ���

	int result = add_plus(10, 11); // x + y; ġȯ�ȴ�.
	
	return 0;
}

int add(int a, int b) { // �Լ����� ( �Լ����ǿ� ������ ���ڱ��� �����ִ°� ����.)

	printf("---");
	return 0;
}

int add_plus(int x, int y) {
	return x + y;
}

void print_add_plus(int x, int y) {
	printf("%d+%d=%d\n", x, y, add_plus(x, y));
}