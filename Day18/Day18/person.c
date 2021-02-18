#include "person.h"

//------ 구조체 함수포인터용 정의부------//
void introduceMySelf(struct Person param) {
	printf("나의 이름은 %s 이고, 나이는 %d 입니다.\n", param.name, param.age);
}

void sayHungry() {
	printf("배고파 밥내놔");
}

int sayMyAge(struct Person param) {
	return param.age;
}

char* sayMyName(struct Person param) {
	return param.name;
}

// ----- 해당 구조체를 메모리 할당 ----- //
	struct Person initPerson(char* name,int age) {
		struct Person person;
		//rson.name = name;
		person.age = age;
		person.introduceMySelf = introduceMySelf;
		person.sayHungry = sayHungry;
		person.sayMyAge = sayMyAge;
		person.sayMyName = sayMyName;
		return person;
	}