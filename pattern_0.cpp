#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int k = n;k>=2;k--)
    {
        for(int l=1;l<=k;l++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}