#include <iostream>
using namespace std;

class Solution
{
public:
    //  This is using loop to reverse the array
    void reverseAnArray(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    //  This is using recursion to reverse the array
    void reverseAnArrayRecursion(int arr[], int start, int end)
    {
        if (start >= end)
        {
            return;
        }
        swap(arr[start], arr[end]);
        reverseAnArrayRecursion(arr, start + 1, end - 1);
    }
};

int main()
{
    Solution obj;

    int myarray[5] = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    // Reversing an array using loop
    obj.reverseAnArray(myarray, 5);
    cout << "\nReversed Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    cout << endl;

    // Reversing an array using recursion

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int SecondAray[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> SecondAray[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << SecondAray[i] << " ";
    }

    obj.reverseAnArrayRecursion(SecondAray, 0, n - 1);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << SecondAray[i] << " ";
    }

    return 0;
}
