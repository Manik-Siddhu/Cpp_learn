#include <iostream>
using namespace std;

int main()
{
    float P , R , T , S;
    cout<<"Enter principal amopunt = ";
    cin>> P ;
    cout<<"Enter rate of interest = ";
    cin>> R ;
    cout<<"Enter Duration in years = ";
    cin>> T ;
    S = (P*R*T)/100 ;
    cout<<"\nYour simple interest = "<< S ;
    return 0;
}