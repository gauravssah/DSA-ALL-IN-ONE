#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Your Number." << endl;
    int n;
    cin >> n;

    int m = n;
    int mask = 0;

    if (n == 0)
    {
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << "Ans : " << ans << endl;
    return 0;
}