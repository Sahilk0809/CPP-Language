#include<iostream>
using namespace std;

class Math
{
	int num;
	public :
		void set()
		{
			cout << "Enter the value : ";
			cin >> num;
		}
		void get()
		{
			cout << endl << "n : " << num;
		}
		Math operator ++(int)
		{
			Math obj;
			obj.num = ++num;
			return obj;
		}	
};

int main()
{
	Math m1,m2;
	m1.set();
	
	cout << endl << "Value Before Increment";
	m1.get();
	
	m2 = m1++;
	
	cout << endl << endl << "Value After Increment";
	m1.get();
	
	return 0;
}