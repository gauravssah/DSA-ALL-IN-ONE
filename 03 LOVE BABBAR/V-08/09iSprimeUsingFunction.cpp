#include <iostream>
using namespace std;

bool iSprime(int n)
{
    int prime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    cout << "Enter The Number." << endl;
    int n;
    cin >> n;
    int prime = iSprime(n);

    if (prime)
    {
        cout << "This is a prime Number." << endl;
    }
    else
    {
        cout << "This is Not a prime Number." << endl;
    }

    return 0;
}