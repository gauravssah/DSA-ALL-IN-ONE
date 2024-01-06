#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Number " << endl;
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + lastdigit;
        prod = prod * lastdigit;

        n = n / 10;
    }

    int sub = prod - sum;
    cout << sub << endl;
}