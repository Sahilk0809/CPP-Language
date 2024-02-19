#include<iostream>
using namespace std;

class Distance
{
    int km,meter;
    
    public:
        void setter()
        {
            cout << "Enter Kilometer : ";
            cin >> this->km;
            cout << "Enter Meter : ";
            cin >> this->meter;
        }
        void getter()
        {
            cout << "Km : " << this->km << endl;
            cout << "Meter : " << this->meter <<endl;
        }
        Distance operator+(Distance &d2)
        {
            Distance dis;
            int total = this->meter+d2.meter;
            int x = total/1000;
            int y = total%1000;
            total = x + this->km + d2.km;
            dis.km = total;
            dis.meter = y;
            return dis;
        }
};

int main()
{
        Distance d1,d2,d3;
        
        d1.setter();
        d2.setter();
        
        d3 = d1 +d2;
        
        d3.getter();
        
        return 0;
}