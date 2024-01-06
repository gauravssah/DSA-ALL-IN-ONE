#include <iostream>
using namespace std;

void reverprintingusingbacktracking(int i, int n)
{
    if (i > n)
    {
        return;
    }

    reverprintingusingbacktracking(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter Your Number :" << endl;
    cin >> n;
    cout << "start printing.." << endl;
    reverprintingusingbacktracking(1, n);
    cout << "End printing.." << endl;
    return 0;
}