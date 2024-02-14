#include<iostream>
using namespace std;

class Cricket
{
	protected :
		int over;
};
class T20 : public Cricket
{
	public : 
		void getOvers(int over)
		{
			cout << "T20 : " << over << " Overs" << endl;
		}
};
class ODI : public Cricket
{
	public : 
		void getOvers(int over)
		{
			cout << "ODI : " << over << " Overs" << endl;
		}
};

int main()
{
	T20 t1;
	ODI o1;
	
	t1.getOvers(20);
	o1.getOvers(50);
	return 0;
}