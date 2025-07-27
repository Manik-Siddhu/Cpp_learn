#include <iostream>
using namespace std;
int main()
{
    float income;
    cout<<"Enter your income =";
    cin>>income ;
    if(income<= 500000 )
    {
        cout<<"You don't have to pay tax";
    }else if(income<= 1000000)
    {
        cout<<"you have to pay 20 percent of tax\n";
        cout<<"Tax you should pay is "<< .2*(income) ;
    }
    else{
         cout<<"you have to pay 30 percent of tax\n";
        cout<<"Tax you should pay is "<< .3*(income) ;
    }
}