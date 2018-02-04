#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
	char brand[20];
	int price;
};

struct Person{
	char name[20];
	int deposit;
	Car* car;
};

void buy(Person* p){
	Car* car = (Car*)malloc(sizeof(Car));
	strcpy_s(car->brand, "da");
	car->price = 10;

	p->car = car;
	p->deposit -= car->price;
}

void seal(Person* p, Person* op){
	op->car = p->car;
	op->deposit -= op->car->price*0.5;
	p->deposit -= p->car->price*0.5;

	p->car = NULL;
}

void discard(Person* p){
	free(p->car);
	p->car = NULL;
}
 
int main(){

	Person p1 = { "zhangsan", 100, NULL };
	Person op = {"lisi", 200, NULL};

	buy(&p1);
	seal(&p1, &op);

	discard(&op);

	return 0;
}