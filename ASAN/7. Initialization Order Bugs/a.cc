#include <stdio.h>

extern int extern_global;

int read_extern_global(){
	return extern_global;
}

int x = read_extern_global() + 1;

int main(){
	printf("%d\n", x);
	return 0;
}