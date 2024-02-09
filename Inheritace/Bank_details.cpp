#include<iostream>
using namespace std;

class RBI
{
	protected : 
	float rate_of_interest;
	void getROI()
	{
		cout << "Enter the rate of interest RBI charges : ";
		cin >> rate_of_interest;
	}
	
	float rate_of_interest_sbi; 
	void getSBI()
	{
		cout << "Enter the rate of interest SBI charges : ";
		cin >> rate_of_interest_sbi;
	}
	
	float rate_of_interest_bob; 
	void getBOB()
	{
		cout << "Enter the rate of interest BOB charges : ";
		cin >> rate_of_interest_bob;
	}
	
	float rate_of_interest_icici; 
	void getICICI()
	{
		cout << "Enter the rate of interest ICICI charges : ";
		cin >> rate_of_interest_icici;
	}
};
class SBI : public RBI
{
	public :
	void print()
	{
		getROI();
		getSBI();
		cout << endl << "RBI interest : " << rate_of_interest << endl;
		cout << "SBI interest : " << rate_of_interest_sbi << endl << endl;
	}
};
class BOB : public RBI
{
	public :
	void print()
	{
		getBOB();
		cout << endl << "BOB interest : " << rate_of_interest_bob << endl << endl;
	}
};
class ICICI : public RBI
{
	public : 
	void print()
	{
		getICICI();
		cout << endl << "ICICI interest : " << rate_of_interest_icici << endl;
	}
};

int main()
{
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.print();
	b1.print();
	i1.print();
	return 0;
}