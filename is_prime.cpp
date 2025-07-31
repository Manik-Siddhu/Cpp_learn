#include<iostream>
using namespace std;
int main()
{
    int n ;
    int is_prime = 1 ;
    cout<<"Enter a number : ";
    cin>> n ;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            is_prime= 0;
            cout<<"Not prime";
            break;
        }
    }
    if(is_prime==1)
    {
        cout<<"Number is Prime";
    }
    return 0;
}