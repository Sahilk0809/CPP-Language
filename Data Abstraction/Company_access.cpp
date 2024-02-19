#include<iostream>
using namespace std;

class Admin
{
	string can_terminate = "Admin", total_anual_revenue = "Rs. 10000000";
	
	protected :
		
	int manager_salary = 30000,employee_salary,total_staff; 
	string comp_name;
	
	void myAccess()
	{
		cout << "Total revenue per year : " << total_anual_revenue << endl;
		cout << "Termination done by : " << can_terminate << endl;
	}
};

class Manager : public Admin
{
	protected :
		int employee_salary = 10000,total_staff = 50; 
		string comp_name = "XYZ";
		
		void myAccess()
		{
			Admin::myAccess();
			cout << "Manager salary : " << manager_salary << endl;
		}
};

class Employee : public Manager
{
	public :
		
	void myAccess()
	{
		cout << "Company name : " << comp_name << endl;
		cout << "Total staff : " << total_staff << endl;
		cout << "Employee salary : " << employee_salary << endl;
		Manager::myAccess();
	} 
};

int main()
{
	Admin admin;
	Manager manager;
	Employee employee;
	
	employee.myAccess();
	return 0;
}