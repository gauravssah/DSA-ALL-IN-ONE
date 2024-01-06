#include <iostream>
using namespace std;

void printing(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << endl;

    printing(i + 1, n);
}

int main()
{
    cout << "Enter The Number" << endl;
    int n;
    cin >> n;

    printing(1, n);
    return 0;
}