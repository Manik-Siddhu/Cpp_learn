#include <iostream>
using namespace std ;
int main()
{
    int a , b , c ;
    cout<<"Enter no a,b,c"<< endl;
    cin>>a>>b>>c ;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>a && b>c)
    {
        cout<<"b is greatest";
    }
    else if(c>a && c>b)
    {
        cout<<"c is greatest";
    }
    return 0;
}