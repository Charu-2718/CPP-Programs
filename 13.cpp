#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int number=' ';
    cout << "The wihtespace is :"<< number<< endl;
    char ch;
    string prompt="enter character :" ;
    cout<< prompt;
    cin>>ch;
    number=ch;
    cout<<"The character "<<ch <<"has the code "<< number<<endl;

    cout<<uppercase<<oct<<setw(8)<<number<<endl<<hex<<setw(8)<<number<<endl<<dec<<setw(8)<<number<<endl;
    return 0;

}