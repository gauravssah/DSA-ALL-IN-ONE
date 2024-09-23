#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    Solution obj;
    for (int i = 0; i <= n; i++)
    {
        cout << obj.fib(i) << " ";
    }
}
