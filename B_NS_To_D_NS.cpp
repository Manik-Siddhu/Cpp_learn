#include <iostream>
using namespace std;
int main()
{
    int n, last;
    int dec = 0;
    int pwr = 1;
    cout << "Enter a Binary number : ";
    cin >> n;
    for (n; n > 0; n /= 10)
    {
        last = n % 10;
        dec = dec + (last * pwr);
        pwr = pwr * 2;
    }
    cout << "Decimal of given binary number is " << dec;
    return 0;
}