#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int minIndexValue = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minIndexValue])
            {
                minIndexValue = j;
            }
        }

        // swap(arr[minIndexValue], arr[i]);

        int temp = arr[minIndexValue];
        arr[minIndexValue] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    int arry[] = {13, 46, 24, 52, 20, 9};
    int sizeOfArray = sizeof(arry) / sizeof(arry[0]);

    cout << "Printing Before Sorting : ";

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arry[i] << " ";
    }

    cout << endl;
    cout << endl;

    selectionSort(arry, sizeOfArray);

    cout << "Printing After Sorting : ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}