#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sizeofArray;
    cout << "Enter the size of Array : ";
    cin >> sizeofArray;

    int myArray[sizeofArray];
    cout << "Enter the items in array: ";

    for (int i = 0; i < sizeofArray; i++)
    {
        cin >> myArray[i];
    }

    // Precompute

    int hashArray[1000] = {0};

    for (int i = 0; i < sizeofArray; i++)
    {
        hashArray[myArray[i]] += 1;
    }

    while (true)
    {
        int thisNumber;
        cout << "Enter the Number that You want to find : ";
        cin >> thisNumber;

        cout << "The Number " << thisNumber << " is : " << hashArray[thisNumber] << " Times." << endl;
    }

    return 0;
}
