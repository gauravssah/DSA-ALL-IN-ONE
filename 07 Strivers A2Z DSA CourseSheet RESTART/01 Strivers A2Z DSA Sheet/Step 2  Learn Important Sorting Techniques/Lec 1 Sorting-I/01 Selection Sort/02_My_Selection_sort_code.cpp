#include <bits/stdc++.h>
using namespace std;

void Selection_Sorting(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    int n;
    cout << "Enter The Size of An Array: ";
    cin >> n;

    int myArray[n];
    cout << "Enter The Items of An Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }

    Selection_Sorting(myArray, n);

    cout << "Your Sorted Array is: ";

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "]";

    return 0;
}