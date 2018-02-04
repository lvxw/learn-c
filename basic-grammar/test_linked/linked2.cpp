#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student2{
	char name[20];
	int age;
	double score;
	Student2* next;
};

Student2 head = { 0 };

void add(Student2* obj){
	obj->next = head.next;
	head.next = obj;

}

void forEach(Student2* p){
	while (p){
		printf("%s\t%d\t%lf\n", p->name, p->age, p->score);
		p = p->next;
	}
}

int main(){

	for (int i = 1; i <= 10; i++){
		Student2* obj = (Student2*)malloc(sizeof Student2);
		strcpy_s(obj->name, "zhangsan");
		obj->age = 10+i;
		obj->score = 88.5+i;
		obj->next = 0;
		add(obj);
	}

	forEach(head.next);

	return 0;
}