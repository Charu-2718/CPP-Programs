#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter one number: ";
    cin>> x;
    
    cout<<"Enter other number: ";
    cin>> y;
    x += y;


x *= y;
x /= y;
cout << "\n And this is "
<< "your current lucky number: "
<< fixed << setprecision(0)
<< x << endl;
return 0;
}

