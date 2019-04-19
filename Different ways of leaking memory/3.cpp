#include <stdio.h>
#include <stdlib.h>

struct rectangle {
	double widht;
	double height;
};

int main(){
	rectangle* rect = new rectangle();
	rect->widht = 10;
	rect->height = 20;
	printf("%.2f %.2f\n", rect->height, rect->widht);
	delete rect;
	return 0;
}