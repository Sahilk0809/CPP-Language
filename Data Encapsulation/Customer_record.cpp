#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
	int cust_id,cust_age;
	string cust_name,cust_city,cust_mobile_number,cust_simcard_validity,cust_telecom_brand_name;
	
	public : 
	
	void input()
	{
		cout << "Enter customer ID : ";
		cin >> cust_id;
		
		cout << "Enter customer age : ";
		cin >> cust_age;
		
		cin.ignore();
		
		cout << "Enter customer name : ";
		getline(cin,cust_name);
		
		cout << "Enter city : ";
		getline(cin,cust_city);
		
		cout << "Enter customer mobile number : ";
		getline(cin,cust_mobile_number);
		
		cout << "Enter simcard validity : ";
		getline(cin,cust_simcard_validity);
		
		cout << "Enter telecom brand name : ";
		getline(cin,cust_telecom_brand_name);
		cout << endl;
	}
	void output()
	{
		cout << "ID : " << cust_id << endl;
		cout << "Age : " << cust_age << endl;
		cout << "Name : " << cust_name << endl;
		cout << "City : " << cust_city << endl;
		cout << "Mobile number : " << cust_mobile_number << endl;
		cout << "Simcard validity : " << cust_simcard_validity << endl;
		cout << "Telecom brand : " << cust_telecom_brand_name << endl;
		cout << endl;
	}
};

int main()
{
	int n,i; 
	cout << "Enter the size of array : ";
	cin >> n;
	
	Customer c[n];
	
	for(i=0; i<n; i++)
	{
		c[i].input();
		c[i].output();
	}
	
	return 0;
}