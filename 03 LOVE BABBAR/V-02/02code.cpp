#include <iostream>
using namespace std;

int main()
{
    int a = 65;
    cout << a << endl;

    // char b = "v";  Cant do Like This.
    char b = 'v';
    cout << b << endl;

    char c = a;
    cout << c << endl;

    char d = 'a';
    cout << c << endl;

    bool t = true;
    cout << t << endl;

    float f = 1.2;
    cout << f << endl;

    double d1 = 1.23;
    cout << d1 << endl;

    int size = sizeof(d1);
    cout << size << endl;
}