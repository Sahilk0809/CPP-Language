#include<iostream>
using namespace std;

class X
{
	protected : 
	int a,b,c;
};
class Y : public X
{
	public : 
	void set()
	{
		cout << "Enter the value of A : ";
		cin >> a;
		
		cout << "Enter the value of B : ";
		cin >> b;
		
		cout << "Enter the value of C : ";
		cin >> c;
	}
	void get()
	{
		cout << endl;
		cout << "Sum of the cube of a,b and c is " << ((a * a * a) + (b * b * b) + (c * c * c)) << endl;
	}	
};

int main()
{
	Y y1;
	y1.set();
	y1.get();
	return 0;
}