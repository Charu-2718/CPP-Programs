#include<iostream>
#include<string>
using namespace std;
string header ="Hello peeps!";
int main()
{
    string word , rest;
    cout<< header <<"\nPress <return> to go on " <<endl;
    cin.get();
    cout<<"\n Please enter "<< "end with<!> and <return> ."<< endl;
    cin>>word;
    getline(cin , rest, '!');
    cout<<"\n the first word is :  "<<word<<"\n remaining :  "<<rest<< endl;

    return 0;
}