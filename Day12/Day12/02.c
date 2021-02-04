#include <stdio.h>

// 동적 메모리 할당
// Heap 영역에 생성 -> 런타임시 메모리에 탑재
// 동적 메모리를 생성하는 시점에서 동적 메모리 크기를 결정할 수 있기 때문에
// 프로그램 동작시 ( Run time ) 에 생성된다.

// 1. malloc();
// 2. calloc();
// 3. re-alloc();
// 4. 메모리 해제는 free();

int main(void) {

	int* p = NULL;
	
	p = malloc(sizeof(int)*10);  // int니까 4bytes씩 10개
	//0x00 0x04 0x08 0x12 ~~~ 0x32

	// 1. 배열처럼
	p[0] = 10;
	p[1] = 20;

	// 2. 포인터처럼
	*(p + 2) = 30; //p[2]
	*(p + 3) = 40; //p[3]
	*(p + 4) = 50; //p[4]

	for (int i = 0; i < 5; i++) {
		printf("%p->%d=%d\n", &p[i], p[i], *(p + i));
	}

	

	free(p);

	return 0;
}