#include <stdlib.h>

void *p;

void Foo(){
	malloc(7);
}
void Bar(){
	malloc(5);
}

int main(){
	Foo();
	Bar();
	p = malloc(7);
	p = 0;
	int *a = new int[10];
	free(a);
	return 0;
}