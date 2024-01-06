#include <iostream>
using namespace std;

void printigusingBacktracking(int n)
{
    if (n == 0)
    {
        return;
    }

    printigusingBacktracking(n - 1);

    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter Your Number :" << endl;
    cin >> n;

    cout << "Start printing..." << endl;
    printigusingBacktracking(n);
    return 0;
}