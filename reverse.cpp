#include<iostream>
using namespace std;
int main()
{
    int n , last;
    int rev = 0;
    cout<<"Enter any number = " ;
    cin>>n;
    for(n;n>0;n/=10)
    {
        last=n%10;
        rev = (rev*10)+last;
    }
    cout<<"reversed number : "<< rev;
    return 0 ;
}