#include<iostream>
using namespace std;

class A
{ 
	int a,b,c;
	
	public :
		
	void calculate(int a, int b)
	{
		this -> a = a;
		this -> b = b;
		cout << "Division : " << this -> a / this -> b << endl;
	}
	void calculate(int a, int b, int c)
	{
		this -> a = a;
		this -> b = b;
		this -> c = c;
		cout << "Substraction : " << this -> a - this -> b - this -> c << endl;
	}
};
class B
{
	int a,b,c,d,e;
	
	public : 
	
	void calculate(int a, int b, int c, int d)
	{
		this -> a = a;
		this -> b = b;
		this -> c = c; 
		this -> d = d;
		cout << "Multiplication : " << this -> a * this -> b * this -> c * this -> d << endl;
	}
	void calculate(int a, int b, int c, int d, int e)
	{
		this -> a = a;
		this -> b = b;
		this -> c = c; 
		this -> d = d;
		this -> e = e;
		cout << "Addition : " << this -> a + this -> b + this -> c + this -> d + this -> e << endl;
	}
};

int main()
{
	A a1;
	B b1;
	
	a1.calculate(10,5);
	a1.calculate(20,5,10);
	b1.calculate(10,5,6,7);
	b1.calculate(10,5,15,7);
	return 0;
}