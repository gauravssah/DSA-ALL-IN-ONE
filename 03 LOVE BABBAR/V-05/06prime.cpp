#include <iostream>
using namespace std;

int main()
{
    cout << "Enter The value Your Number To chech, Prime or Not." << endl;
    int n;
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "Not Prime!" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        cout << "This is a prime Number ." << endl;
    }
    else
    {
        cout << "Not a prime Number ." << endl;
    }

    // **************************************

    // int flage = 0;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         flage++;
    //     }
    // }

    // if (flage > 0)
    // {
    //     cout << n << " Not Prime Number : " << endl;
    // }
    // else
    // {
    //     cout << "Prime Number." << endl;
    // }
}