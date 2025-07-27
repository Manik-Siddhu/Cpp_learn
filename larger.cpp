#include <iostream>
using namespace std;
int main()
{
    int a, b ;
    cout<<"Enter both numbers";
    cin>> a >> b ;
    if(a>b){
        cout<<"a is greater";
    }else
    {
        cout<<"b is greater"<< endl ;
    }
    if(a=b)
    {
        cout<<"Both are equal";
    }
    return 0 ;
}