#include<iostream>
#include<string.h>
using namespace std;

class Cafe
{
    int cafe_id,cafe_establish_year,cafe_staff_quantity;
    float cafe_rating;
    string cafe_name,cafe_type,cafe_location;
    
    public : 
    
    Cafe()
    {
        cout << "Cafe details : ";
        cout << endl;
    }
    
    void set()
    {
        //user input
        cout << "Enter cafe ID : ";
        cin >> cafe_id;
        cin.ignore();
        
        cout << "Enter cafe name : ";
        getline(cin,cafe_name);
        
        cout << "Enter cafe type : ";
        getline(cin,cafe_type);
        
        cout << "Enter cafe rating : ";
        cin >> cafe_rating;
        cin.ignore();
        
        cout << "Enter cafe location : ";
        getline(cin,cafe_location);
        
        cout << "Enter cafe eshtablish year : ";
        cin >> cafe_establish_year;
        cin.ignore();
        
        cout << "Enter staff quantity : ";
        cin >> cafe_staff_quantity;
        cin.ignore();
    }
    void get()
    {
        //display input
        cout << endl;
        cout << "ID : " << cafe_id << endl;
        cout << "Cafe name : " << cafe_name << endl;
        cout << "Cafe type : " << cafe_type << endl;
        cout << "Cafe rating : " << cafe_rating << " Star" << endl;
        cout << "Cafe location : " << cafe_location << endl;
        cout << "Cafe establish year : " << cafe_establish_year << endl;
        cout << "Cafe staff quantity : " << cafe_staff_quantity << endl;
        cout << endl;
    }
};

int main()
{
    Cafe cafe1;
    
    cafe1.set();
    cafe1.get();
    
    return 0;
}
