#include <stdio.h>

int main(void) {

	int arr[5] = { 1, 2, 3, 4, 5 };
	int* arr_cp = NULL;

	// int tmp_arr[5] = {0};
	// �迭������ ����� �� �ּҰ��� ���� �� �� ����.
	// arr = tmp_arr; // error
	// arr = tmp_arr; // &error

	// �Ϲ� �����ͺ��� zz�� �� �ּҰ��� ������ �� �ִ�.
	int xx = 10;
	int yy = 20;
	int* zz = &xx;
	zz = &yy;

	// arr = [�迭�� ���� �ּҰ�];
	// &arr

	printf("%p %p %p %p %p\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d\n", arr, &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	// arr�� int �迭�̹Ƿ�, int * �� ���� �� �ִ�.
	arr_cp = arr;
	for (int i = 0; i < 5; i++) {
		//printf("%d\n", arr_cp[i]);
		printf("[ �ּ� : %d ]=%d\n", arr_cp + i, *(arr_cp + i));
	}

	return 0;
}