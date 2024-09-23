#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << "Enter the string." << endl;
    // string s;
    // cin >> s;

    // // pre compute
    // int hashArry[26] = {0};

    // for (int i = 0; i < s.size(); i++)
    // {
    //     hashArry[s[i] - 'a']++;
    // }

    // cout << "Enter the char : " << endl;
    // char ch;
    // cin >> ch;

    // cout << "No. " << hashArry[ch - 'a'] << endl;

    // #######################################
    // for hashing all the char

    cout << "Enter the string." << endl;
    string s;
    cin >> s;

    // pre compute
    int hashArry[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hashArry[s[i]]++;
    }

    cout << "Enter the char : " << endl;
    char ch;
    cin >> ch;

    cout << "No. " << hashArry[ch] << endl;

    return 0;
}
