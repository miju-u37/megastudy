#pragma once
// ��������� �Լ��� �����, ������(����/���)���� ����/���Ǻ�

// Person ����ü ���Ǻ�
struct Person {
	char *name[100];
	int age;
	void(*introduceMySelf)(struct Person);
	void(*sayHungry)(struct Person);
	int(*sayMyAge)(struct Person);
	char* (*sayMyName)(struct Person);

};

// Person ����ü�� initial �ϱ����� �Լ� ����
struct Person initPerson();