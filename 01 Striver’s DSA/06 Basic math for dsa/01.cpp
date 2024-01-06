#include <iostream>
using namespace std;

int main()
{
    // int n = 8575;
    // int c = 0;
    // int sum = 0;
    // cout << "printing using while looop" << endl;
    // while (n > 0)
    // {
    //     int d1 = n % 10;
    //     c++;
    //     n = n / 10;
    //     cout << d1 << endl;
    //     sum = sum + d1;
    // }

    // cout << "Total digits are : " << c << endl;
    // cout << "The sum of digits  : " << sum << endl;

    // Printing The Reverse Number ---------->;

    // int n = 987654321;
    // int rev = 0;

    // while (n > 0)
    // {
    //     int lastDigit = n % 10;
    //     rev = rev * 10 + lastDigit;
    //     n = n / 10;
    // }

    // cout << "Aftre Reversing the No : " << rev;

    // <-------------- Palindrome Number -------------->
    // int x;
    // cout << "Enter Your Number :" << endl;
    // cin >> x;
    // int dupx = x;
    // int rev = 0;

    // while (x > 0)
    // {
    //     int lastDigit = x % 10;
    //     rev = rev * 10 + lastDigit;
    //     x = x / 10;
    // }

    // if (rev == dupx)
    // {
    //     cout << "This is a Palindrome Number" << endl;
    // }
    // else
    // {
    //     cout << "This is Not Palindrome Number" << endl;
    // }

    // ------------------------>

    // int n = 36;
    // int i = 1;
    // int sum = 0;

    // while (i <= n)
    // {
    //     if (n % i == 0)
    //     {
    //         sum++;
    //     }
    //     i++;
    // }

    // cout << sum;

    // ------------------------------>

    // Prime Number

    cout << "Enter Your Number : " << endl;
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << n << " Is a Prime Number" << endl;
    }
    else
    {
        cout << n << " Is Not a Prime Number" << endl;
    }
}