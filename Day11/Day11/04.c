#include <stdio.h>

int main(void) {

	int arr[5] = { 1, 2, 3, 4, 5 };
	int* arr_cp = NULL;

	// int tmp_arr[5] = {0};
	// 배열변수는 상수라 그 주소값을 변경 할 수 없다.
	// arr = tmp_arr; // error
	// arr = tmp_arr; // &error

	// 일반 포인터변수 zz는 그 주소값을 변경할 수 있다.
	int xx = 10;
	int yy = 20;
	int* zz = &xx;
	zz = &yy;

	// arr = [배열의 시작 주소값];
	// &arr

	printf("%p %p %p %p %p\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d\n", arr, &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	// arr은 int 배열이므로, int * 에 담을 수 있다.
	arr_cp = arr;
	for (int i = 0; i < 5; i++) {
		//printf("%d\n", arr_cp[i]);
		printf("[ 주소 : %d ]=%d\n", arr_cp + i, *(arr_cp + i));
	}

	return 0;
}