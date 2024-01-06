#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 36;
    int i = 0;
    int ct = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            ct++;
        }
        i++;
    }
    cout << "hello";
    cout << ct;
    return 0;
}