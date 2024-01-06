#include <iostream>
using namespace std;

bool searchElm(int ar[], int siz, int key)
{
    for (int i = 0; i < siz; i++)
    {
        if (key == ar[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    int arr[5] = {4, 8, 2, 1, 9};
    int elem;
    cout << "Enter The Element to Search in Array" << endl;
    cin >> elem;

    bool found = searchElm(arr, 5, elem);

    if (found)
    {
        cout << "Element is founded!" << endl;
    }
    else
    {
        cout << "Element Not is founded!" << endl;
    }

    return 0;
}