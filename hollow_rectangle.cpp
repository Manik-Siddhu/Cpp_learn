#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"*"<<" ";
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"*"<<endl;
    }
    return 0;
}