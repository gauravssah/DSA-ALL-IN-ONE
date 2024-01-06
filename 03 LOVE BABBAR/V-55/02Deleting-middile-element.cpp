#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> s, int count, int size)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call.

    solve(s, count + 1, size);
    s.push(num);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    cout << "Size : " << s.size() << endl;
    cout << "Top : " << s.top() << endl;

    int count = 0;
    int size = s.size();
    solve(s, count, size);

    cout << "after deletion" << endl;
}