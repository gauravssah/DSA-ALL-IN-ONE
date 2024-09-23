#include <iostream>
using namespace std;

void howmanyTimes(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << count;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 5, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    howmanyTimes(arr, size, 5); // Counting how many times the number 2 appears

    return 0;
}
