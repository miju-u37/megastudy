#pragma once
// 헤더파일은 함수의 선언부, 데이터(변수/상수)들의 선언/정의부

// Person 구조체 정의부
struct Person {
	char *name[100];
	int age;
	void(*introduceMySelf)(struct Person);
	void(*sayHungry)(struct Person);
	int(*sayMyAge)(struct Person);
	char* (*sayMyName)(struct Person);

};

// Person 구조체를 initial 하기위한 함수 선언
struct Person initPerson();