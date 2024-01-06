#include <iostream>
#include <string>
using namespace std;

bool checkpalend(int i, string &name)
{
    if (i >= name.size() / 2)
    {
        return true;
    }

    if (name[i] != name[name.size() - i - 1])
    {
        return false;
    }

    return checkpalend(i + 1, name);
}

int main()
{
    string ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    cout << checkpalend(0, ch);
    cout << endl;
    cout << ch << endl;
    return 0;
}