#include <iostream>
using namespace std;

int main()
{
    int temp = 0;
    cout << "Enter your Temperature in Fahrenheit." << endl;
    cin >> temp;
    int cel = 0;
    cel = (temp - 32) * 5 / 9;
    cout << "Your Temperature is : " << cel << " C " << endl;
}