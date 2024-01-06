#include <iostream>
using namespace std;

int main()
{
    char n;
    cout << "Enter Your Number" << endl;
    cin >> n;

    // cout << n << endl;

    if (n >= 97 && n <= 122)
    {
        cout << "Lowercase Letters" << endl;
    }
    else if (n >= 65 && n <= 90)
    {
        cout << "Uppercase Letters" << endl;
    }
    else
    {
        cout << "Some Special Char.." << endl;
    }
}