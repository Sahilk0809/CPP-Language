#include<iostream>
using namespace std;

class P
{
	protected : 
	float celcius;
};
class Q : public P
{
	protected :
	float fahrenheit;
	
	void toFahrenheit()
	{
		cout << "Enter the celcius : ";
		cin >> celcius;
		fahrenheit = (celcius * 9/5) + 32;
	}
};
class R : public Q
{
	float kelvin;
	
	public : 
	
	void toKelvin()
	{
		toFahrenheit();
		kelvin = (fahrenheit - 32) * 5/9 + 273.15;
	}
	void set()
	{
		cout << "Fahrenheit : " << fahrenheit << endl;
		cout << "Kelvin : " << kelvin;
	}
};
int main()
{
	R r1;
	r1.toKelvin();
	r1.set();
	return 0;
}