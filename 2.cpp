#include<iostream>
using namespace std;

void message() , lines();

int main()
{
    cout<<"Hello!" << endl;
    lines();
    message();
    lines();
    cout<<"Bye!" << endl;
    
}
void lines(){
    cout<<"------------" << endl;
}
void message(){
    cout<<"Message" << endl;
}