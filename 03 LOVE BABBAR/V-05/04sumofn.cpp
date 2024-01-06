#include <iostream>
using namespace std;

int main()
{
    cout << "Enter The Value Of n ." << endl;
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum << endl;
}