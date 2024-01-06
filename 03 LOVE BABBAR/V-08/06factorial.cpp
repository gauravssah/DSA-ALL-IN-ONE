#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    cout << "Enter the Number." << endl;
    int n;
    cin >> n;
    int f = factorial(n);
    cout << "Factorial of " << n << " is " << f << endl;

    return 0;
}