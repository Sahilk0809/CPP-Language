#include<iostream>
#include<string.h>
using namespace std;

class A
{
	virtual void valid() = 0;
};

class Div : public A
{
	int a,b;
		
	public : 
	
	void get()
	{
		cout << "Enter a : ";
		cin >> a;
		cout << "Enter b : ";
		cin >> b;
	}
	void valid()
	{
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout << "Division : " << a/b << endl << endl; 
			}
		}
		catch(...)
		{
			cout << "Can't divide by zero...!" << endl << endl;
		}
	}
};

class Age : public A
{
	int age;
	
	public :	
	
	void get()
	{
		cout << "Enter age : ";
		cin >> age;
	}
	void valid()
	{
		try
		{
			if(age < 18)
			{
				throw age;
			}
			else
			{
				cout << "You are eligible to vote..." << endl << endl;
			}
		}
		catch(...)
		{
			cout << "Your are not eligible to vote...!" << endl << endl;
		}
	}
};

class Pass : public A
{
	int i,check = 0;
	char pass[50];
	
	public : 
	
	void get()
	{
		cout << "Enter password : ";
		cin >> pass;
	}
	void valid()
	{	
		int len = strlen(pass);
		for(i=0; i<len; i++)
		{
			if(pass[i]>=65 && pass[i]<=90)
			{
				check = 1;
			}
		}
		
		try 
		{
			if(check!=1)
			{
				throw pass;
			}
			else
			{
				cout << "Your password is valid..." << endl << endl;
			}
		}
		catch(...)
		{
			cout << "Password must contain an uppercase letter...!" << endl << endl;
		}
	}
};

int main()
{
	Div d1;
	Age a1;
	Pass p1;
	
	d1.get();
	d1.valid();
	a1.get();
	a1.valid();
	p1.get();
	p1.valid();
	return 0;
}