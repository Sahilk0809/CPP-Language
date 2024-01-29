#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
	int a[n],i;
	
	for(i=0; i<n; i++)
	{
		cout << "a["<< i <<"] - ";
		cin >> a[i];
	}
	cout << endl;
	cout << "Even elements of the array : " << endl;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}