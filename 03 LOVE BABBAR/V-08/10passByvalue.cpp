#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "N : " << n << endl;
}

int main()
{
    cout << "Enter the value of n." << endl;
    int n;
    cin >> n;
    dummy(n);

    cout << "Number : " << n << endl;

    return 0;
}