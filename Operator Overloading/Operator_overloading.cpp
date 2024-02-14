#include<iostream>
using namespace std;

class Maximum
{
	int a;
	public : 
	
	void set()
	{
		cout << "Enter the value : ";
		cin >> a;
	}
	Maximum operator < (Maximum &m2)
	{
		Maximum max;
		int x = this -> a < m2.a;
		max.a = x;
		return max;
	}
	void get()
	{
		if(a>0)
		{
			cout << "Object 2 is max..." << endl;
		}
		else
		{
			cout << "Object 1 is max..." << endl;
		}
	}
};

int main()
{
	Maximum m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3 = m1 < m2;
	
	m3.get();
	return 0;
}