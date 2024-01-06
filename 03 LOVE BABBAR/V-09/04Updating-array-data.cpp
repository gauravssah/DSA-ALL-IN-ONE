#include <iostream>
using namespace std;

void printTheArray(int arr[], int siz)
{
    arr[0] = 50;

    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int array[5] = {10, 8, 2, 45, 5};

    printTheArray(array, 5);

    return 0;
}