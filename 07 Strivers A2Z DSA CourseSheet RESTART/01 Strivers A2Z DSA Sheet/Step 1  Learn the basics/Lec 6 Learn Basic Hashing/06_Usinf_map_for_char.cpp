#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter The String characters." << endl;
    string s;
    getline(cin, s);

    // unordered_map<int, int> mpp;

    map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // Iterate in the map.

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    bool yn = true;
    while (yn)
    {
        cout << "Enter Your Char to find its time : ";
        char mychar;
        cin >> mychar;
        cout << "The char " << mychar << " Having : " << mpp[mychar] << " Times.";

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
