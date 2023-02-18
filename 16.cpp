#include<iostream>
using namespace std;
int main()
{
    int x, c=0;
    float sum=0.0;
    cout<<"Please enter some numbers:\n""(Break with any letter)"<<endl;
    while (cin>>x)
    {
        sum+=x;
        ++c;
    
    }
    cout<<"The average is : "<<sum/c <<endl;
    return 0;
}