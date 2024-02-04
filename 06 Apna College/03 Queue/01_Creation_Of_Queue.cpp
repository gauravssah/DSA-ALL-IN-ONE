#include <iostream>
using namespace std;
#define n 20
class Queue
{
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }

        rear++;
        arr[rear] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > rear)
        {
            cout << "underflow!" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No element in queue!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;
    return 0;
};