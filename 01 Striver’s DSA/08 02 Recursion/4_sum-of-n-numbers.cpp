#include <bits/stdc++.h>
using namespace std;

int num;
int sum = 0;

// Q. Sum of first N Natural Numbers --->

void printTheSumofNnumbers(int n)
{
    if (n < 1)
    {
        cout << "The sum of the first " << num << " numbers is: " << sum << endl;
        return;
    }
    sum = sum + n;
    printTheSumofNnumbers(n - 1);
}

int printingSumUsingAnotherapproch(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + printingSumUsingAnotherapproch(n - 1);
}

int main()
{
    cout << "Enter The Number." << endl;
    cin >> num;
    // printTheSumofNnumbers(num);

    cout << printingSumUsingAnotherapproch(num) << endl;

    return 0;
}