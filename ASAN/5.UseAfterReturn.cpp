int *ptr;

void FunctionThatEscapesLocalObjects(){
	int local[100];
	ptr = &local[0];
}

int main(int argc, char* argv[]){
	FunctionThatEscapesLocalObjects();
	return ptr[argc];
}