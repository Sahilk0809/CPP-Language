#include<iostream>
using namespace std;

class Time
{
	public : 
	int hr,min,sec;
	int second;
	
	void process()
	{
//process to convert in hh:mm:ss
		hr = second/3600;
		min = (second%3600)/60;
		sec = second%60;
	}
	void print()
	{
		cout << hr << ":" << min << ":" << sec;	
	}	
};

int main()
{
//object of class Time
	Time time1;
	cout << "Enter second : ";
	cin >> time1.second;//user input of second
	time1.process();
	time1.print();
	
	return 0;
}
