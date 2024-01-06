#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "(a&b) : " << (a & b) << endl;
    cout << "(a|b) : " << (a | b) << endl;
    cout << "(~b) : " << ~b << endl;
    cout << "(~a) : " << ~a << endl;
    cout << "(a^b) : " << (a ^ b) << endl;

    cout << "(17 >> 1) : " << (17 >> 1) << endl;
    cout << "(21 << 2) : " << (21 << 2) << endl;

    return 0;
}