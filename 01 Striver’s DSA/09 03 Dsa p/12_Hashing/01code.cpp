#include <iostream>
using namespace std;

int counter = 0;

int checkNum(int n, int arr[], int arrln)
{

    for (int i = 0; i < arrln; i++)
    {
        if (arr[i] == n)
        {
            counter++;
        }
    }

    return counter;
};

int main()
{
    int arr[] = {1, 3, 5, 1, 2, 2, 3, 4, 2, 2, 2, 2, 2};
    int arrLength = sizeof(arr) / sizeof(int);
    int num;

    cout << "Enter your Number:" << endl;
    cin >> num;

    int res = checkNum(num, arr, arrLength);

    cout << "Your Number " << num << " Appers " << res << " Times in arry. " << endl;

    return 0;
}