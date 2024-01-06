#include <bits/stdc++.h>
using namespace std;
int num;

int calculateTheFactorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    return n * calculateTheFactorial(n - 1);
}

int main()
{

    cout << "Enter The Number." << endl;
    cin >> num;

    int fact = calculateTheFactorial(num);
    cout << "The Factorial of " << num << " is :" << fact << endl;

    return 0;
}