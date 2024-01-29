#include<iostream>
using namespace std;

int main()
{
	int fromYear,toYear;
	cout <<"From year : ";
	cin >>fromYear;
	
	cout <<"To year : ";
	cin >>toYear;
	
	int lenght = toYear - fromYear;
	int leap = lenght/4 + 1;
	int leapyear[leap];
	
	int i,x=0,count=0;
	
	for(i=fromYear; i<=toYear; i++)
	{
		if(i%4==0)
    	{
    		leapyear[x]=i;
    		x++;
    		count++;
		}
	}
	cout << endl;
	cout << "Leap year between " << fromYear << " to " << toYear;
	cout << endl;
	for(i=0; i<x; i++)
	{
		cout<<leapyear[i]<<" ";
	}
	return 0;
}