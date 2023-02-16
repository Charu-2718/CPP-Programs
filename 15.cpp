#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r=1.5, e=1;
    cout<<fixed<<setprecision(2);
    cout<<"\t Euro \tDollar\n";
    while(e <=5)
    {
        
        cout<<"\t"<<e<<"\t"<<e*r<<endl;
        e=e+1;
    }
}