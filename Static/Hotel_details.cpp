#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	int hotel_id,hotel_staff_quantity,hotel_room_quantity;//integer variable declare
	float hotel_rating;//float variable for hotel rating
	string hotel_location,hotel_type;
	
	static string hotel_name;//static variable for multiple details
	static int hotel_establish_year;
	
	public : 
	
	void input()
	{
		//user input of hotel details
		cout << "Hotel ID : ";
		cin >> hotel_id;
		cin.ignore();
		
		cout << "Hotel type : ";
		getline(cin,hotel_type);
		
		cout << "Hotel rating : ";
		cin >> hotel_rating;
		cin.ignore();
		
		cout << "Hotel location : ";
		getline(cin,hotel_location);
		
		cout << "Hotel staff quantity : ";
		cin >> hotel_staff_quantity;
		
		cout << "Hotel room quantity : ";
		cin >> hotel_room_quantity;
	}
	void output()
	{
		//printing all the details of hotel
		cout << "Hotel ID : " << hotel_id << endl;
		cout << "Hotel name : " << hotel_name << endl;
		cout << "Hotel type : " << hotel_type << endl;
		cout << "Hotel rating : " << hotel_rating << " Star" <<endl;
		cout << "Hotel location : " << hotel_location << endl;
		cout << "Hotel established year : " << hotel_establish_year << endl;
		cout << "Hotel staff quantity : " << hotel_staff_quantity << endl;
		cout << "Hotel room quantity : " << hotel_room_quantity << endl;
		cout << endl;
	}
};

int Hotel::hotel_establish_year = 1994;//value assigned for static variable
string Hotel::hotel_name = "Dream";

int main()
{
	int n,i;//n is array size and i for loop coounter
	cout << "Enter number of hotels enteries yoy want to fill : ";
	cin >> n;//user input of array size
	Hotel h[n];
	cout << endl;
	for(i=0; i<n; i++)
	{
		h[i].input();
	}
	for(i=0; i<n; i++)
	{
		cout << "------------------------------------------";
		cout << endl;
		cout << "Hotel " << i+1 << endl << endl;
		h[i].output();
	}
	
	return 0;
}