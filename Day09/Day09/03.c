#include <stdio.h>


int action_add(int a, int b) {
	return a + b;
}

int Add2(int a, int b) {
	return;
}

void printAAA() {
	printf("AAA");
	return;
}

void action(int a) {

	int result = 0;

	if (a == 10) { 
		// a == 10�϶��� ����ڵ尡 ����ǰ� / �ƴ� ������ ����Ʈ ��ü�� ���� �ʰڴ�.
		result = a;
	}
	else {
		return;
	}

	printf("%d\n", result);
}

int main_03(void) {
	// ���ϱ� 
	int add_result = action_add(1, 2);
	printf("%d\n", Add2(1, 2));

	return 0;
}
