#include <stdio.h>

struct Person{
	char name[16];
	int age;
	double score;
};

int main(){

	Person p1 = {"zhangsan",12,23.6};

	Person* pp = &p1;

	printf("%s\t%d\t%lf\n",  p1.name,  p1.age,  p1.score);
	printf("%s\t%d\t%lf\n", pp->name, pp->age, pp->score);

	return 0;
}