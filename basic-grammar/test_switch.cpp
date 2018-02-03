#include <stdio.h>

int main(){
	char ch = 17;
	switch (ch){
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	default:
		printf("other");
		break;
	}
	return 0;
}