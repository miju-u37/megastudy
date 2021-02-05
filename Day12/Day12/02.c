#include <stdio.h>

// ���� �޸� �Ҵ�
// Heap ������ ���� -> ��Ÿ�ӽ� �޸𸮿� ž��
// ���� �޸𸮸� �����ϴ� �������� ���� �޸� ũ�⸦ ������ �� �ֱ� ������
// ���α׷� ���۽� ( Run time ) �� �����ȴ�.

// 1. malloc();
// 2. calloc();
// 3. re-alloc();
// 4. �޸� ������ free();

int main(void) {

	int* p = NULL;
	
	p = malloc(sizeof(int)*10);  // int�ϱ� 4bytes�� 10��
	//0x00 0x04 0x08 0x12 ~~~ 0x32

	// 1. �迭ó��
	p[0] = 10;
	p[1] = 20;

	// 2. ������ó��
	*(p + 2) = 30; //p[2]
	*(p + 3) = 40; //p[3]
	*(p + 4) = 50; //p[4]

	for (int i = 0; i < 5; i++) {
		printf("%p->%d=%d\n", &p[i], p[i], *(p + i));
	}

	printf("\n\n");

	p = realloc(p, 15 * sizeof(int)); 

	for (int i = 0; i < 15; i++) {
		printf("%p -> %d = %d\n", &p[i], p[i], *(p + i));
	}
	

	free(p);

	return 0;
}