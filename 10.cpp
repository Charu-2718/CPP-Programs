#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter one number: ";
    cin>> x;
    y= 2.0 + pow(x,3);
    //sin(), cos(), sqrt(), exp(), log(), log10(),...
    cout<<"The answer is :"<<y << endl;
    return 0;
}