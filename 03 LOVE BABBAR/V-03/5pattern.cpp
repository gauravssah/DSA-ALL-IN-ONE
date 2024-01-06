#include <iostream>
using namespace std;

int main()
{
    // cout << "Enter the value of n." << endl;
    // int n;
    // cin >> n;
    // int i = 0;

    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << " * ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ------------------------------------>

    cout << "Enter the value of n." << endl;
    int n;
    cin >> n;
    int i = 1;

    while (i < n)
    {
        int j = 1;
        while (j < n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}