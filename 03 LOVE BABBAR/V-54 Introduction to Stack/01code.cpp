#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s; // Creation of stack

    // Push operation
    s.push(2);
    s.push(3);
    s.push(4);

    // pop operation
    s.pop();

    cout << "Printing the top Element : " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "size of stack is : " << s.size() << endl;

    return 0;
}