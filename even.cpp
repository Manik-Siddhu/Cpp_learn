#include<iostream>
using namespace std ;
int main()
{
    int a; 

    cout<<"Enter your number = ";
    cin>> a ;

    if(a==0)
    {
        cout<<"Niether even nor odd\n";
    }
    if( a%2 == 0 && a!=0 )
    {
        cout<<"Your no is even";
    }
    if(a%2 == 1)
    {
        cout<<"your no is odd";
    }
    return 0 ;

}