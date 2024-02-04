#include<iostream>
#include<string.h>
using namespace std;

class Car
{
    public :
    int car_id;        
    char car_colour[50];        
    char car_model[50];        
    int car_release_year;
    char car_company_name[50];                
};

int main()
{
    int n;//number of cars
    cout << "Enter the number of cars : ";
    cin >> n;//user input
    Car car[n];
    int i;//loop counter

    for(i=0; i<n; i++)
    {
        cout << endl;
        cout << "Car " << i+1;
        cout << endl;
        cout << "Enter car ID : ";
        cin >> car[i].car_id;
        
        cout << "Enter car company name : ";
        cin >> car[i].car_company_name;
        
        cout << "Enter car colour : ";
        cin >> car[i].car_colour;
        
        cout << "Enter car model : ";
        cin >> car[i].car_model;
        
        cout << "Car release year : ";
        cin >> car[i].car_release_year;
    }
    for(i=0; i<n; i++)
    {
        cout << endl;
        cout << "Car " << i+1;
        cout << endl;
        cout << "Car ID : " << car[i].car_id << endl;
        cout << "Car company name : " << car[i].car_company_name << endl;
        cout << "Car colour : " << car[i].car_colour << endl;
        cout << "Car model : " << car[i].car_model << endl;
        cout << "Car release year : " << car[i].car_release_year << endl;
        cout << endl;
    }
    return 0;
}
