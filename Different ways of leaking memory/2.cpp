#include <stdio.h>

struct rectangle {
	double widht;
	double height;
};

int main(){
	rectangle* rect = new rectangle[10];
	rect[0].widht = 10;
	rect[0].height = 20;
	printf("%.2f %.2f\n", rect[0].height, rect[0].widht);
	// rectangle* recp = new rectangle();
}