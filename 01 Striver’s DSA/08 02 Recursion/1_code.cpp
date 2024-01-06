#include <bits/stdc++.h>
using namespace std;
int num = 0;

void print()
{
    cout << num << endl;
    num++;
    print();
};

int main()
{
    print(); // This is an infinite calling recursion function.

    return 0;
}