#include<iostream>
using namespace std;

class Message
{
	string msg;
	public : 
		Message(string msg)
		{
			this->msg=msg;
		}
		void print()
		{
			cout << msg << endl;
		}
		void print(string newMsg)
		{
			cout << msg << " " << newMsg << endl;
		}
};

int main()
{
	Message m1("Hello");
	
	m1.print();
	m1.print("World");
	
	return 0;
}