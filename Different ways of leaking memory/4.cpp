#include <stdlib.h>

void use_buffer(char* memory){
	memory[0] = 'a';
}

void leak_memory()
{
	char* memory = (char*)malloc(4096);
	use_buffer(memory);
	/* whoops! forgot to call free() */
}

int main(){
	leak_memory();
	return 0;
}