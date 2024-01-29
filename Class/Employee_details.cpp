#include<iostream>
using namespace std;

class Employee
{
    public :
    int emp_id;        
    char emp_name[50];        
    int emp_age;        
    char emp_role[50];        
    char emp_city[50];        
    int emp_experience;
    char emp_company_name[50];                
};

int main()
{
    int n;//number of employees
    cout << "Enter the number of employees : ";
    cin >> n;//user input
    Employee employee[n];
    int i;//loop counter

    for(i=0; i<n; i++)
    {
        //user input of details of employees
        cout << endl;
        cout << endl;
        cout << "Employee " << i+1;
        cout << "Enter your ID : ";
        cin >> employee[i].emp_id;

        cout << "Enter your Name : ";
        cin >> employee[i].emp_name;

        cout << "Enter your age : ";
        cin >> employee[i].emp_age;

        cout << "Enter your role : ";
        cin >> employee[i].emp_role;

        cout << "Enter your city : ";
        cin >> employee[i].emp_city;

        cout << "Enter Your experience : ";
        cin >> employee[i].emp_experience;

        cout << "Enter Your company name : ";
        cin >> employee[i].emp_company_name;
        cout << endl;
    }
    for(i=0; i<n; i++)
    {
        //print details of employees
        cout << "ID : "<< employee[i].emp_id << endl;
        cout << "Name : "<< employee[i].emp_name << endl;
        cout << "Age : "<< employee[i].emp_age << endl;
        cout << "Role : "<< employee[i].emp_role << endl;
        cout << "City  : "<< employee[i].emp_city << endl;
        cout << "Experience : "<< employee[i].emp_experience << endl;
        cout << "Company Name : "<< employee[i].emp_company_name << endl;
        cout << endl;
    }
    return 0;
}
