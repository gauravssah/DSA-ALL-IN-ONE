#include <iostream>
using namespace std;

void printingInReverse(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    printingInReverse(n - 1);
}

int main()
{
    cout << "Enter The Number :" << endl;
    int n;
    cin >> n;
    cout << "Starting Printing..." << endl;

    printingInReverse(n);

    cout << "Printing End.." << endl;
    return 0;
}