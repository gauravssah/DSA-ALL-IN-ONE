// Count digits in a number

#include <bits/stdc++.h>
using namespace std;

void countAndPrintTheDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        cout << "Digit: " << n % 10 << endl;
        n = n / 10;
        count++;
    }

    cout << "Total Digits: " << count << endl;
};

void printSameInreverseOrder(int n)
{
    cout << "Number in reverse order: ";
    int revNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    cout << endl;
    cout << revNum;
    cout << "Digits in reverse order: " << endl;
    countAndPrintTheDigits(revNum);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    countAndPrintTheDigits(n);
    printSameInreverseOrder(n); // Print the number in reverse order
    return 0;
}
