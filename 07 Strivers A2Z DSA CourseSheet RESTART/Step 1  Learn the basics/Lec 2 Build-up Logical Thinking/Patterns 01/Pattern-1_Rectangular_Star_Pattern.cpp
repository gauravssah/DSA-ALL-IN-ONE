#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < n; i++)
    {
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for (int i = 0; i < n; i++)
        {
            cout << " * ";
        }

        cout << endl;
    }
}
