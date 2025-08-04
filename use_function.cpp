#include <iostream>
using namespace std;
int factorial(int b)
{
    int fact = 1;
    for (int i = 1; i <= b; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomial(int n, int x)
{
    cout << "Enter n :";
    cin >> n;
    cout << "Enter x :";
    cin >> x;
    int val1 = factorial(n);
    int val2 = factorial(x);
    int val3 = factorial(n - x);
    return val1 / (val2 * val3);
}
int main()
{
    int m = binomial(1,1);
    cout << m;
    return 0;
}
