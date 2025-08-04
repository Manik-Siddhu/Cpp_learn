#include <iostream>
using namespace std;
int main()
{
    int n, last, first;
    int rev = 0;
    cout << "Enter any number = ";
    cin >> n;
    first = n;
    for (n; n > 0; n /= 10)
    {
        last = n % 10;
        rev = (rev * 10) + last;
    }
    if (first == rev)
    {
        cout << "your number is palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}