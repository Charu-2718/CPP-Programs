#include<iostream>
#include<string>
using namespace std;
int main()
{
    string prompt("What is your name? "), name , line(40, '-'), total="hello ";
    cout<<prompt;
    getline(cin, name);
    total+=name;
    cout<< line<<endl<<total<<endl;
    cout<< "Lenght is : "<< name.length()<<endl;
}