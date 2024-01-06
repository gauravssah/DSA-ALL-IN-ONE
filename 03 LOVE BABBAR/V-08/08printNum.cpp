#include <iostream>
using namespace std;

void printNnumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    cout << "Enter the value of n." << endl;
    int n;
    cin >> n;

    printNnumbers(n);

    return 0;
}