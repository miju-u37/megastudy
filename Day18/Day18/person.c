#include "person.h"

//------ ����ü �Լ������Ϳ� ���Ǻ�------//
void introduceMySelf(struct Person param) {
	printf("���� �̸��� %s �̰�, ���̴� %d �Դϴ�.\n", param.name, param.age);
}

void sayHungry() {
	printf("����� �䳻��");
}

int sayMyAge(struct Person param) {
	return param.age;
}

char* sayMyName(struct Person param) {
	return param.name;
}

// ----- �ش� ����ü�� �޸� �Ҵ� ----- //
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