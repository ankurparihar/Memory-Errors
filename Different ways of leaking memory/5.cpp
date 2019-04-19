int main(){
	char *a = new char[128];
	char *b = new char[128];
	b = a;
	delete [] a;
	delete [] b; // original b pointer will not be deallocated
	return 0;
}