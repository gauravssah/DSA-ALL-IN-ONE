#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    cout << "Enter your number." << endl;
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "This is an Even Number." << endl;
    }
    else
    {
        cout << "This is an odd number." << endl;
    }

    return 0;
}