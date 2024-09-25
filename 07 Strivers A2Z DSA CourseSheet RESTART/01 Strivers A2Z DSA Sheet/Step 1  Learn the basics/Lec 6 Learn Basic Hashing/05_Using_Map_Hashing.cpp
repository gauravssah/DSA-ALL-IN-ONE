#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The size of Array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the items in Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute

    // unordered_map<int, int> mpp;

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Iterate in the map.


    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    bool yn = true;
    while (yn)
    {
        int num;
        cout << "Enter the Number : ";
        cin >> num;
        cout << "The Number " << num << " Having : " << mpp[num] << " Times.";

        cout << endl;

        cout << "Do you want Again: Y/N : ";
        char choic;
        cin >> choic;

        if (choic == 'y' || choic == 'Y')
        {
            yn = true;
        }
        else
        {

            yn = false;
        }
    }

    cout << "Thank You!" << endl;
    return 0;
}
