#include<iostream>
using namespace std;

class Math
{
	int a,b;
	public :
		void set()
		{
			cout << "Enter the value of a : ";
			cin >> a;
			
			cout << "Enter the value of b : ";
			cin >> b;
		}
		
		void get()
		{
			cout << endl << "a : " << a << endl;
			cout << "b : " << b;
		}
		
		Math operator -(Math &m2)
		{
			int x,y;
			Math temp;
			
			x = a - m2.a;
			y = b - m2.b;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};

int main()
{
	Math m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3 = m1 - m2;
	
	m3.get();
	
	return 0;
}