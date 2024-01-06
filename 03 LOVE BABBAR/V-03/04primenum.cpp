#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your Number to check Prime Or Not." << endl;
    cin >> num;
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not Prime For : " << i << endl;
        }
        else
        {
            cout << "Prime For : " << i << endl;
        }

        i++;
    }
}