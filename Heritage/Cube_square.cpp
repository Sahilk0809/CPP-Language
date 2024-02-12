#include<iostream>
using namespace std;

class A
{
	protected : 
	
	int a;
	void get()
	{
		cout << "Enter the value : ";
		cin >> a;
	}
	void cube()
	{
		get();
		int cube;
		cube = a * a * a;
		cout << "Cube : " << cube << endl;
	}
	void square()
	{
		get();
		int square;
		square = a * a;
		cout << "Square : " << square << endl;
	}
};
class Cube : public A
{
	public : 
	void out()
	{
		cube();
	}
};
class Square : public A
{
	public : 
	void out()
	{
		square();
	}
};

int main()
{
	Cube c1;
	Square s1;
	
	c1.out();
	s1.out();
	return 0;
}