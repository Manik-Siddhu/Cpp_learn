#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day no : ";
    cin>>day;
    switch(day)
    {
        case 1 :
        cout<<"Day is monday";
        break;
        case 2 :
        cout<<"Day is tuesday";
        break;
        case 3 :
        cout<<"Day is wednesday";
        break;
        case 4 :
        cout<<"Day is thursday";
        break;
        case 5 :
        cout<<"Day is friday";
        break;
        case 6 :
        cout<<"Day is saturday";
        break;
        case 7 :
        cout<<"Day is sunday";
        break;
        default :
        cout<<"Invalid day no!";
    }
    return 0;
}