#include <iostream>
using namespace std;

int count = 1;
void print1(int n)
{
    if (count >= n + 1)
    {
        return;
    }

    cout << count << endl;
    count++;
    print1(n);
}

int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;
    print1(n);
    return 0;
}