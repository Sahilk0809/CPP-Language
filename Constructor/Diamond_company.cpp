#include<iostream>
#include<string.h>
using namespace std;

class Diamond
{
    int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamond,comp_export_diamond;
    string comp_name,comp_ceo;
    
    public :
    
    Diamond(int id,int revenue,int staff_quantity,int export_diamond,int import,string name,string ceo)
    {
        comp_id = id;
        comp_revenue = revenue;
        comp_export_diamond = export_diamond;
        comp_staff_quantity = staff_quantity;
        comp_import_raw_diamond = import;
        comp_name = name;
        comp_ceo = ceo;
    }
    void output(int i)
    {
        cout << "Company " << i+1;
        cout << "Company id : " << comp_id << endl;
        cout << "Company name : " << comp_name << endl;
        cout << "Company revenue : " << comp_revenue << endl;
        cout << "Exports of diamonds : " << comp_export_diamond << endl;
        cout << "Import of diamonds : " << comp_import_raw_diamond << endl;
        cout << "CEO of the company : " << comp_ceo << endl;
        cout << endl;
    }
};

int main()
{
    int n,i;//n is size of array amd i is for loop counter
    cout << "Enter the number of diamond companies details you want to enter : ";
    cin >> n;
    int id,revenue,staff_quantity,export_diamond,import;
    string name,ceo;
    
    Diamond d[n] = Diamond(id,revenue,staff_quantity,export_diamond,import,name,ceo);
    
    for(i=0; i<n; i++)
    {
        cout << "Enter company id : ";
        cin >> id;
        
        cin.ignore();
        cout << "Enter company name : ";
        getline(cin,name);
        
        cout << "Enter company revenue : ";
        cin >> revenue;
        
        cout << "Enter staff quantity : ";
        cin >> staff_quantity;
        
        cout << "Enter export diamonds : ";
        cin >> export_diamond;
        
        cout << "Enter import diamonds : ";
        cin >> import;
        
        cout << "Enter CEO of the company : ";
        cin >> ceo;
        
        d[i] = Diamond(id,revenue,staff_quantity,export_diamond,import,name,ceo);
    }
    for(i=0; i<n; i++)
    {
        d[i].output(i);
    }
    return 0;
}