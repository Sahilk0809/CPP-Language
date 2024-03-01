#include<iostream>
using namespace std;

class Age
{
	int age;
	
	public :
		void vote()
		{
			cout << "Enter age : ";
			cin >> age;
			
			if(age < 18)
			{
				throw 0;	
			}
			else
			{
				cout << "You Are Eligible to Vote..." << endl;	
			}	
		}	
};

int main()
{
	Age a1;
	
	try
	{
		a1.vote();
	}
	catch(int a)
	{
		cout << "You Are Not Eligible to Vote...!" << endl;	
	}
	
	return 0;
}