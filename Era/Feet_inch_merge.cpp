#include<iostream>
using namespace std;

class Merge
{
	public : 
	int feet1,inch1,feet2,inch2;
	
	void ans()
	{
// user input of feet and inch 
		cout << "Enter feet 1 : ";
		cin >> feet1;
		cout << "Enter feet 2 : ";
		cin >> feet2;
		cout << "Enter inch 1 : ";
		cin >> inch1;
		cout << "Enter inch 2 : ";
		cin >> inch2;	
	
//process to convert
		feet1 = feet1 + (inch1/12);
		inch1 = inch1%12;
		feet2 = feet2 + (inch2/12);
		inch2 = inch2%12;
	
		cout << endl << "Feet : " << feet1 + feet2;
		cout << endl << "Inch : " << inch1 + inch2;
	}
};

int main()
{
// object of class Merge
	Merge merge1;
	
	merge1.ans();
	return 0;
}
