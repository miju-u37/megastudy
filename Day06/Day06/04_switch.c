//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>

/*
* if () {

}
	switch(변수/값){

	case 값1:
	//변수/값 == 값1 실행
	break;
	case 값2:
	// 변수/값 == 값2 실행
	break;

	......
	default;
		// 위의 case 구문에서 만족하는( == ) 내용이 없을 때
	}

	if( 변수/값 == 값1) {
		//변수/값 == 값1 실행
	} else if( 변수/값 == 값2) {
		//변수/값 == 값2 실행
	}...
	}else

	*/

int main_04(void) {

	int num;
	printf("몇 번 메뉴를 선택하시겠습니까?\n");
	printf("\t(1) 짜장면 \n");
	printf("\t(2) 탕수육 \n");
	printf("\t(3) 짬뽕 \n");
	printf("번호선택");
	
	scanf("%d", &num);

	printf("----------------------\n");

	switch (num) {
		
	case 1:
		printf("짜장면은 5000원 입니다.");
		break;
	case 2:
		printf("탕수육은 20000원 입니다.");
		break;
	case 3:
		printf("짬뽕은 6000원 입니다.");
		break;

	default:
		printf("없는 메뉴입니다.");

	}
	printf("\n\n");

	/*
	if (num == 1) {

	}
	else if (num == 3) {

	}
	else {
		printf("없는 메뉴입니다.");
	}
	*/
	return 0;

}