#include <iostream>
using namespace std;

int findUnique(int arr[], int siz)
{
    int ans = 0;

    for (int i = 0; i < siz; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{

    int arry[8] = {4, 1, 2, 4, 1, 3, 2, 3};

    int ans = findUnique(arry, 8);

    if (ans)
    {
        cout << "Not Unique" << endl;
    }
    else
    {
        cout << "Unique" << endl;
    }

    return 0;
}