#include <iostream>
using namespace std;

int power(int x, int y)
{
    int ans = 1;

    for (int i = 1; i <= y; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int main()
{

    int a, b;
    cout << "Enter the value of a, b" << endl;
    cin >> a >> b;
    int answer = power(a, b);
    cout << "Answer : " << answer << endl;

    return 0;
}