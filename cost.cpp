#include <iostream>
using namespace std;

int main()
{
    float pencil , eraser  , pen , x ;
    cout<<"Enter the price of pencil = ";
    cin>>pencil;
    cout<<"\nEnter the price of eraser = ";
    cin>>eraser;
    cout<<"\nEnter the price of pen = ";
    cin>>pen;
    x = .18*(pencil + eraser + pen) + pencil + eraser + pen;
    cout<<"\nYour total bill is = "<< x ;
    return 0;
}