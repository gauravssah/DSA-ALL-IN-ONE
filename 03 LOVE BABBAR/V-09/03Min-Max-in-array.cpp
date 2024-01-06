#include <iostream>
using namespace std;

void getMax(int arr[], int size)
{

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The Max Value is : " << max << endl;
}

void getMin(int arr[], int size)
{

    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]); // same workig of blow lines.

        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }

    cout << "The min Value is : " << mini << endl;
}

int main()
{

    int array[6] = {20, 4, 80, 3, -9, 12};

    getMax(array, 6);
    getMin(array, 6);

    return 0;
}