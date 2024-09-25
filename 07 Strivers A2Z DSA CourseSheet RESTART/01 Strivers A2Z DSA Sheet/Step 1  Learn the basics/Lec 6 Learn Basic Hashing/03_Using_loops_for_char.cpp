#include <bits/stdc++.h>
using namespace std;

void HowmanyTime(char arr[], char ch, int s)
{

    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }

    cout << "No of Time : " << count << endl;
}

int main()
{
    char charArray[] = {'a', 'B', 'c', 'b', 'A', 'f', 'F', 'a', 'b', 'l'};
    int sizeofArray = sizeof(charArray) / sizeof(charArray[0]);
    HowmanyTime(charArray, 'B', sizeofArray);

    return 0;
}
