#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
};

void selectionSort(int *A, int n)
{
    cout << "Selection Sort Running..." << endl;
}

int main()
{
    int A[] = {12, 45, 23, 51, 19, 8};
    int siz = sizeof(A) / sizeof(int);
    printArray(A, siz);

    selectionSort(A, siz);

    return 0;
}