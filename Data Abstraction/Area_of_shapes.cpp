#include<iostream>
using namespace std;

class Area
{
	protected : 
	float area,heigth,width,radi;
	
	virtual void calculate() = 0;
};
class Rectangle : public Area
{
	public : 
	
	void input()
	{
		cout << "Enter heigth : ";
		cin >> heigth;
		cout << "Enter width : ";
		cin >> width;
	}
	void calculate()
	{
		area = heigth * width;
		cout << "Area of Rectangle : " << area << endl << endl;
	}
};
class Triangle : public Area
{
	public :
		
	void input()
	{
		cout << "Enter heigth : ";
		cin >> heigth;
		cout << "Enter base : ";
		cin >> width;
	}
	void calculate()
	{
		area = (heigth * width) * 1/2;
		cout << "Area of Triangle : " << area << endl << endl;
	}
};
class Circle : public Area
{
	public :
		
	void input()
	{
		cout << "Enter radius : ";
		cin >> radi;
	}
	void calculate()
	{
		area = (radi * radi) * 3.14;
		cout << "Area of rectangle : " << area << endl << endl;
	}
};

int main()
{
	Rectangle r1;
	Triangle t1;
	Circle c1;
	
	r1.input();
	r1.calculate();
	t1.input();
	t1.calculate();
	c1.input();
	c1.calculate();
	
	return 0;
}