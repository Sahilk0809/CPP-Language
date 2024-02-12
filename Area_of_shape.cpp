#include<iostream>
using namespace std;

class A
{
	protected :
		int height,width;
		
		void get()
		{
			cout << "Enter heigth : ";
			cin >> height;
			cout << "Enter width : ";
			cin >> width;
		}
		void rectangleArea()
		{
			cout << "For rectangle : " << endl;
			get();
			cout << "Area of recatngle is : " << height * width << endl;
		}
		void triangleArea()
		{
			cout << endl << "For triangle : " << endl;
			get();
			cout << "Area of triangle is : " <<  (height * width) * 1/2 << endl;
		}
};
class Rectangle : public A
{
	public : 
	void area()
	{
		rectangleArea();
	}
};
class Triangle : public A
{
	public : 
	void area()
	{
		triangleArea();
	}
};

int main()
{
	Rectangle r1;
	Triangle t1;
	
	r1.area();
	t1.area();
	return 0;
}