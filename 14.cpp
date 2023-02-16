#include<iostream>
using namespace std;
int main()
{
    double x=12.0;
    cout.precision(2);
    cout<<"by default"<<x<<endl;
    cout<<"fixed point"<<fixed<<x<<endl;
    cout<<"showpoint"<<showpoint<<x<<endl;
    cout<<"scientific"<<scientific<<x<<endl;
}