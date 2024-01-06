#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter Your Number." << endl;
    int n;
    cin >> n;
    int flage = 0;
    for (int i = 0; i <= 30; i++)
    {
        if (pow(2, i) == n)
        {
            flage = 1;
            break;
        }
    }

    if (flage)
    {
        cout << "This is Powe of 2." << endl;
    }
    else
    {
        cout << "This is Not in Powe of 2." << endl;
    }
}