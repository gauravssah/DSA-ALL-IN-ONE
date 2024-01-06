#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 2};
    int ln = sizeof(arr) / sizeof(int);

    for (int elem : arr)
    {
        cout << elem;
    }

    for (int i = 0; i < ln; i++)
    {
        arr[i] = arr[ln - i - 1];
    }
    cout << endl;
    for (int elem : arr)
    {
        cout << elem;
    }
    return 0;
}