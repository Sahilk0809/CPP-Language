#include<iostream>
using namespace std;

class Time
{
	public : 
	int hr,min,sec;
	int second;
	
	void process()
	{
		hr = second/3600;
		min = (second%3600)/60;
		
	}
	void print()
	{
		cout << hr << " " << min << " ";	
	}	
};

int main()
{
	Time time1;
	cout << "Enter second : ";
	cin >> time1.second;
	time1.process();
	time1.print();
	
	return 0;
}
