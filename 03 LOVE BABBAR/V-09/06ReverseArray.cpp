#include <iostream>
using namespace std;

void printArray(int arar[], int siz)
{
    for (int i = 0; i < siz; i++)
    {
        cout << arar[i] << " ";
    }

    cout << endl;
}

void revArray(int arar[], int siz)
{
    int start = 0;
    int end = siz - 1;

    while (start <= end)
    {
        swap(arar[start], arar[end]);
        start++;
        end--;
    }
}

int main()
{

    int aar[5] = {4, 1, 55, 9, 7};

    cout << "Before reversing the array" << endl;
    printArray(aar, 5);
    revArray(aar, 5);

    cout << "After reversing the array" << endl;
    printArray(aar, 5);

    return 0;
}