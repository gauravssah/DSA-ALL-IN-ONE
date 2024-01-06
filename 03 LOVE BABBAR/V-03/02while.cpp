#include <iostream>
using namespace std;

int main()
{
    cout << "Enter The Number" << endl;
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;

    // sum of n numbers. ---->

    // while (i <= n)
    // {
    //     // cout << i << " ";
    //     sum += i;
    //     i++;
    // }
    // cout << sum << endl;

    // sum of even numbers. ---->

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << sum << endl;
}