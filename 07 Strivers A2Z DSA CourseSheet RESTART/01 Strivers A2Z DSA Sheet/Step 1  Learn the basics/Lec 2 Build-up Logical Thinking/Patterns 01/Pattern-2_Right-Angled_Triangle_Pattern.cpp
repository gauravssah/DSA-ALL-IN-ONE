#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printTriangleABC(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            char newchar = 65 + j;
            cout << newchar;
        }
        cout << "\n";
    }
}

int main()
{
    cout << "Enter the no: ";
    int n;
    cin >> n;
    printTriangleabc(n);
    // printPattern(n);

    return 0;
}
