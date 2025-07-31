#include<iostream>
using namespace std;
int main()
{
    int n = 98721;
    int last ;
    int sum=0;
    for(n;n>0;n/=10)
    {
        last = n%10;
        sum+=last;
    }
    cout<<"sum of digits of given numbers = "<< sum ;
    return 0;
}