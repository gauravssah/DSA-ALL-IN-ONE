#include <iostream>
using namespace std;

void arrswap(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    arrswap(i + 1, arr, n);
};
int main()
{
    int n;

    cout << "Enter the Size of Array." << endl;
    cin >> n;
    int arr[n];
    cout << "Enter The Elements of array." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    cout << "Your Arry is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After swapping.." << endl;

    arrswap(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}