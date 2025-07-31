//Sum of first n natural number
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout<<"Enter number n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"Sum of first n natural number : "<< sum ;
    return 0;
}