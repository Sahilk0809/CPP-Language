#include<iostream>
using namespace std;

class Exception
{
	int age;
	float a,b;
	string password;
	
	public :
		void valideAge()
		{
			cout << "Enter age : ";
			cin >> age;
			
			try
			{
				if(age < 18)
				{
					throw 0;	
				}
				else
				{
					cout << "You Are Eligible to Vote..." << endl << endl;	
				}	
			}
			catch(int age)
			{
				cout << "You Are Not Eligible to Vote...!" << endl << endl;	
			}	
		}	
		void division()
		{
			cout << "Division check : " << endl;
			cout << "Enter the first value : ";
			cin >> a;
			
			cout << "Enter the second value : ";
			cin >> b;
			
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
			catch(float b)
			{
				cout << "Can't divide by " << b << endl << endl;	
			}
			
		}
		void validePassword()
		{ 
			int check=0;
			cout << "Password validate check : " << endl;
			cout << "Enter Password : ";
			cin >> password;
			
			for(int i=0; i<password.length(); i++)
			{
				if(password[i] >= 'A' && password[i] <= 'Z')
				{
					check = 1;
					break;
				}
			}
			
			try
			{
				if(check == 1)
				{
					cout << "Password is Valid" << endl;	
				}
				else
				{
					throw password;	
				}
			}
			catch(string password)
			{
				cout << "Atleast one capital letter required...!";	
			}	
		}
};

int main()
{
	Exception e1;
	
	e1.valideAge();
	e1.division();
	e1.validePassword();
	
	return 0;
}