#include<iostream>
using namespace std;

int main()
{
	int feet,inch,i;
	
	cout << "Enter the Feet : ";
	cin >> feet;
	
	cout << "Enter the inches : ";
	cin >> inch;
	
	for(i=1; i<=inch; i++)
	{
		if(inch>=12)
		{
			inch -=12;
			feet++;
		}
	}
	cout << "Feet " << ": "<< feet <<endl;
	cout << "Inches " << ": "<< inch;
	
	return 0;
}