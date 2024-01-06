#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1634;
    int originalDigit = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }

    if (sum == originalDigit)
    {
        cout << "True";
    }
    else
    {
        cout << "True";
    }

    return 0;
}