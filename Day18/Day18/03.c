#include "person.h"


int main_03(void) {
	struct Person p = initPerson("������",44);
	p.introduceMySelf(p);

	struct Person p2 = initPerson("�����", 44);
	p2.introduceMySelf(p2);
	return 0;
}
