struct A
{
	A* aptr;
};

void doSomething(void* p)
{
	if(p)
	{
		delete p;
	}
}

int main()
{
	A* p = new A();
	doSomething(p);
	return 0;
}