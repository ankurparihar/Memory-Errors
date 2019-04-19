#include <string>

class MyClass
{
public:
	virtual void doSomething() {}
};

class MyClass2 : public MyClass
{
private:
	std::string str;
public:
	MyClass2(std::string& s)
	{
		str = s;
	}
	virtual void doSomething() {}
};

int main()
{
	std::string hello("hello");
	MyClass *p = new MyClass2(hello);
	if(p)
	{
		delete p;
	}
	return 0;
}
