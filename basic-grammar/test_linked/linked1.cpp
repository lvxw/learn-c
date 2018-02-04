#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[20];
	int age;
	double score;
	Student* next;
};

Student stuArr[] = {
	{"zhangsan", 12, 89.5, 0},
	{ "li", 13, 99.5, 0 },
	{"wangwu", 14, 79.5, 0},
	{"zhaoliu", 15, 69.5, 0}

};

Student* findByAge(Student* p, int age){
	while (p){
		if (p->age == age){
			return p;
		}
		p = p->next;
	}

	return NULL;
}

void forEach(Student* p){
	while (p){
		printf("%s\t%d\t%lf\n",p->name,p->age,p->score);
		p = p->next;
	}
}

int main1(){
	stuArr[0].next = &stuArr[1];
	stuArr[1].next = &stuArr[2];
	stuArr[2].next = &stuArr[3];

	forEach(stuArr);
	printf("***********************\n");

	Student* stu = findByAge(stuArr, 14);
	if (stu){
		printf("%s\t%d\t%lf\n", stu->name, stu->age, stu->score);
	}

	return 0;
}