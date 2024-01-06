#include <iostream>
using namespace std;

int factoral(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// nCr = n! / r! * (n – r)!

int nCrFunction(int n, int r)
{
    int upper = factoral(n);
    int lower = factoral(r) * factoral(n - r);
    int ans = upper / lower;

    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value of n." << endl;
    cin >> n;
    cout << "Enter the value of r." << endl;
    cin >> r;

    int nCr = nCrFunction(n, r);

    cout << "Answer : " << nCr << endl;

    return 0;
}