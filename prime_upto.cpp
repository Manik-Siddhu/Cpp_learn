#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>> n ;
    for(int i = 2;i<=n;i++)
    {
        int is_prime = 1 ;
        for(int j = 2;j*j<=i;j++)
        {
        if(i%j==0)
        {
            is_prime= 0;
            break;
        }
        }
    
    if(is_prime)
    {
        cout<<i<<endl;
    }
    }
    return 0;
}