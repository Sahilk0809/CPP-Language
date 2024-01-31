#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_email,stu_city,stu_college;
	
	public : 
	
	void input()
	{
		cout << "Enter student ID : ";
		cin >> stu_id;
		
		cout << "Enter student age : ";
		cin >> stu_age;
		
		cin.ignore();
		
		cout << "Enter student name : ";
		getline(cin,stu_name);
		
		cout << "Enter student course : ";
		getline(cin,stu_course);
		
		cout << "Enter student email : ";
		getline(cin,stu_email);
		
		cout << "Enter student city : ";
		getline(cin,stu_city);
		
		cout << "Enter student college : ";
		getline(cin,stu_college);
		cout << endl;
	}
	void output()
	{
		cout << "ID : " << stu_id << endl;
		cout << "Age : " << stu_age << endl;
		cout << "Name : " << stu_name << endl;
		cout << "Course : " << stu_course << endl;
		cout << "City : " << stu_city << endl;
		cout << "Email : " << stu_email << endl;
		cout << "College : " << stu_college << endl;
		cout << endl;
	}
};

int main()
{
	int n,i; 
	cout << "Enter the size of array : ";
	cin >> n;
	
	Student s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input();
		s[i].output();
	}
	
	return 0;
}