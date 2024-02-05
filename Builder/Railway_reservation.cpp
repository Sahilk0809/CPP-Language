#include<iostream>
#include<string.h>
using namespace std;

class Reservation
{
	int train_number;
	string train_name,source,destination,train_time;
	
   	void displayRecord()
	{
//details of trains print
		cout << "Train number : " << train_number << endl;
		cout << "Train name : " << train_name << endl;
		cout << "Source : " << source << endl;
		cout << "Destination : " << destination << endl;
		cout << "Train time : " << train_time << endl;
		cout << endl;
	}
	void searchTrainNumber()
	{
//train details by searching with train number
		cout << "Enter train number : ";
		cin >> train_number;
		cout << "Train number : " << train_number << endl;
		cout << "Train name : " << train_name << endl;
		cout << "Source : " << source << endl;
		cout << "Destination : " << destination << endl;
		cout << "Train time : " << train_time << endl;
		cout << endl;
	}
	
	public :
	
	void record()
	{
//process of what user want to print
		while(1)
		{
			int choice;
			cout << "Enter number (1-4) : " << endl;
			cout << "1. Add record : " << endl;
			cout << "2. Display records : " << endl;
			cout << "3. Search by train number : " << endl;
			cout << "4. Exit : " << endl;
			cin >> choice;
			
			if(choice==4)
			{
				cout << "Thank you for choosing !" << endl;
				break;	
			}
			
			switch(choice)
			{
				case 1 : userInput();
				break;
				case 2 : displayRecord();
				break;
				case 3 : searchTrainNumber();
				break;
				default : cout << "Enter valid number : ";
			}
		}	
	}	
	void userInput()
	{
//user input of train details
		cout << "Enter train number : ";
		cin >> train_number;
		cin.ignore();
		
		cout << "Enter train name : ";
		getline(cin,train_name);
		
		cout << "Enter source : ";
		getline(cin,source);
		
		cout << "Enter destination : ";
		getline(cin,destination);
		
		cout << "Enter train time : ";
		getline(cin,train_time);	
	}
};

int main()
{
	int n,i;//i is for loop counter
	cout << "Enter the number of train details you want : ";
	cin >> n;//n number of train details
	Reservation r[n];//object of the class
	
	cout << endl;
	
	for(i=0; i<n; i++)
	{
	    cout << "Train " << i+1 << endl;
		r[i].userInput();//calling the methods of class
		r[i].record();
	}
	
	return 0;
}