#include <iostream>
using namespace std;

int main()
{
    int ch = '1';
    int n = 1;

    switch (ch)
    {
    case 1:
        cout << "This is int 1." << endl;
        break;

    case '1':
        cout << "This is char 1." << endl;
        break;

    case 'a':
        cout << "This is a." << endl;
        break;

    default:
        cout << "This is Default." << endl;
    }
    return 0;
}