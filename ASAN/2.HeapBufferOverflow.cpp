int main(int argc, char* argv[]){
	int *array = new int[10];
	array[0] = 0;
	int res = array[argc + 100]; // BOOM
	return res;
}