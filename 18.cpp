#include<iostream>
using namespace std;
int main()
{
    float x,y,min;
    cout<<"Enter the numbers: \n";
    if(cin>>x && cin>>y)
    {
        if(x<y){
            min=x;
        }
        else{
            min=y;
        }
    }
    cout<<"The minimum is : "<<min<<endl;
}