#include <iostream>
using namespace std;

void alterNativeSwapTheNumber(int arr[], int siz)
{
    for (int i = 0; i < siz; i = i + 2)
    {
        if (i + 1 < siz)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printingArray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int oddArr[5] = {4, 1, 2, 7, 5};
    int evenArr[6] = {40, 12, 2, 17, 55, 43};

    printingArray(oddArr, 5);
    alterNativeSwapTheNumber(oddArr, 5);
    cout << endl;
    printingArray(oddArr, 5);

    cout << endl;
    cout << endl;

    printingArray(evenArr, 6);
    alterNativeSwapTheNumber(evenArr, 6);
    cout << endl;
    printingArray(evenArr, 6);

    return 0;
}