#include <iostream>
using namespace std;

void printingTheArray(int arra[], int siz)
{
    cout << "Printing the array using function." << endl;
    for (int i = 0; i < siz; i++)
    {
        cout << arra[i] << " ";
    }
}

int main()
{

    int arrSize = 10;
    int arr[arrSize] = {1, 2, 5};

    printingTheArray(arr, arrSize);

    return 0;
}