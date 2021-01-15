#include <stdio.h>

int main_1(void) {

	// 산술연산자
	// +, -, *, /, %

	// 비트연산자
	// &, |, ^, ~

	int a = 20, b = 16;
	int result1, result2, result3, result4;

	result1 = a & b; // 논리곱 (AND)
	printf("비트단위 And(논리곱) 연산의 결과 %d \n", result1);

	result2 = a | b; //논리합 (OR)
	printf("비트단위 Or(논리합) 연산의 결과 %d \n", result2);

	result3 = a ^ b; // 배타적 논리합 (XOR)
	printf("비트단위 XOR(배타적 논리합) 연산의 결과 %d \n", result3);

	result4 = ~b; // 부정 Not 연산
	printf("비트단위 Not(부정) 연산의 결과 %d \n", result4);

	return 0;
}

/*
// & AND 연산의 경우는 양쪽 다 true (1) 일때 true (1)

1 & 1 = 1
0 & 1 = 0
1 & 0 = 0
0 & 0 = 0

// | OR  연산의 경우는 둘중에 하나라도 참(true = 1) 일 땐 무조건 참(true = 1)

1 | 1 = 1
0 | 1 = 1
1 | 0 = 1
0 | 0 = 0

// ^ XOR 연산의 경우는 값이 같으면 거짓(0), 다르면 참(1)

1 ^ 1 = 0
0 ^ 1 = 1
1 ^ 0 = 1
0 ^ 0 = 0

// ~ Not 연산의 경우는 비트를 뒤집는다

~1
0000 0001 → 1111 1110 = -1
*/