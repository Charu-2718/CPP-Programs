//Swap the value of a pair of integers
#include<iostream>
#include<iomanip>
using namespace std;
int swap(int a , int b){
    int m=a;
    a=b;
    b=m;
    cout<<"Now a is: " <<a<<endl;
    cout<<"Now b is: "<<b<<endl;
    return 0;
}
int main()
{
    int a,b;
    cout<<"The a is "<<endl;
    cin>>a;
    cout<<"The b is "<<endl;
    cin>>b;
    cout<<swap(a,b);
    }