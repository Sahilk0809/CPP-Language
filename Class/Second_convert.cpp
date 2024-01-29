#include<iostream>
using namespace std;

int main()
{
    int sec;
    cout << "Enter second : ";
    cin >> sec;
    int hr,min;
    
    hr = sec / 3600;
    min = (sec%3600) / 60;
    sec = sec % 60;
    
    cout << endl;
    cout << "Time after converting : " << endl;
    cout << hr << ":" << min << ":" << sec;
    return 0;
}