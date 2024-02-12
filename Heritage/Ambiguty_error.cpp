#include<iostream>
using namespace std;

class A
{
	protected : 
	int a;
};
class B
{
	protected : 
	int a;
};
class C : public A,B
{
	int b;
	public : 
	void get()
	{
		cout << "Enter two values for sum : ";
		cin >> A::a >> B::a;
	}
	void set()
	{
		b = A::a + B::a;
		cout << endl << "Sum is : " << b;
	}
};

int main()
{
	C c1;
	c1.get();
	c1.set();
	return 0;	
}