#include <iostream>
using namespace std;

int main()
{
    cout << "Enter The Value of X." << endl;
    int x;
    cin >> x;

    cout << "Enter The Value of Y." << endl;
    int y;
    cin >> y;

    cout << "Enter The opration." << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << x + y << endl;
        break;

    case '-':
        cout << x - y << endl;
        break;

    case '*':
        cout << x * y << endl;
        break;

    case '/':
        cout << x / y << endl;
        break;

    case '%':
        cout << x % y << endl;
        break;
    default:

        cout << "Error : Not Valid!" << endl;
    }
}
