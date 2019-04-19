#include <stdio.h>
#include <stdlib.h>

struct rectangle {
	double widht;
	double height;
};

int main(){
	rectangle* rect = (rectangle*)malloc(10*sizeof(rectangle));
	rect[0].widht = 10;
	rect[0].height = 20;
	printf("%.2f %.2f\n", rect->height, rect->widht);
	delete [] rect;
	return 0;
}