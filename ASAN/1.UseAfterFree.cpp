int main(int argc, char* argv[]){
	int *array = new int[10];
	delete [] array;
	return array[argc];	// BOOM
}