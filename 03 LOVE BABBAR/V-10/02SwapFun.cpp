#include <iostream>
using namespace std;

void swapArray(int arry[], int siz)
{
    int temp = 0;
    for (int i = 0; i < siz / 2; i++)
    {
        temp = arry[i];
        arry[i] = arry[siz - 1 - i];
        arry[siz - 1 - i] = temp;
    }
}

void printarrry(int arr[], int siz)
{
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapOriginal(int arr[], int siz)
{
    int start = 0;
    int end = siz - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arrr[5] = {4, 1, 5, 9, 6};
    printarrry(arrr, 5);
    cout << endl;
    swapArray(arrr, 5);
    printarrry(arrr, 5);

    return 0;
}