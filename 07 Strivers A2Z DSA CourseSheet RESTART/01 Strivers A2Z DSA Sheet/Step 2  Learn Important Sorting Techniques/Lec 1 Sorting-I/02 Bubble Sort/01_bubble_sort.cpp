#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n-1 ; i++)
    {
        int didSwap = 0;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                didSwap = 1;
            }
        }

        if (didSwap == 0)
        {
            break;
        }

        cout << "runs..\n";
    }
}

int main()
{

    int myArry[] = {1, 2, 5, 8, 9};
    // int myArry[] = {29, 10, 14, 37, 13};

    int sizeofArray = sizeof(myArry) / sizeof(myArry[0]);

    for (int i = 0; i < sizeofArray; i++)
    {
        cout << myArry[i] << " ";
    }

    cout << endl
         << "-------------------" << endl;

    bubble_sort(myArry, sizeofArray);

    for (int i = 0; i < sizeofArray; i++)
    {
        cout << myArry[i] << " ";
    }

    return 0;
}