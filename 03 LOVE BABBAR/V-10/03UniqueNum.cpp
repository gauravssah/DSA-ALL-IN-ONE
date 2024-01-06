#include <iostream>
using namespace std;

int newArr[];

void findUnoqueNum(int arr[], int siz)
{
    int init = 0;
    int initCount;

    for (int i = 0; i < siz; i++)
    {

        if (arr[i] == init)
        {
            initCount++;
        }
        }
}

int main()
{

    int arry[6] = {5, 8, 8, 7, 4, 3};

    findUnoqueNum(arry, 6);

    return 0;
}