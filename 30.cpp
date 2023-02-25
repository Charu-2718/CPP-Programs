//print 
//1 
//22 
//333 
//4444 
//5.... 
#include<iostream>
using namespace std;
int main()
{
    int i, j,k;
    cout<<"Enter the number of rows: "<<endl;     
    cin>>k;     
    for(i=1;i<=k;++i)     
         
        {         
            for(j=1;j<=i;++j)         
            {             
                cout<<i;                  
            }         
            cout<<endl;     
        }      
    return 0; 
}