#include <iostream>
using namespace std;

// 01. -------------->
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

// 02. -------------->
void print2(int p)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

// 03. -------------->
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 04. -------------->
void print4(int g)
{
    for (int i = 1; i <= g; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 05. -------------->
void print5(int g)
{
    for (int i = 1; i <= g; i++)
    {
        for (int j = 0; j < g - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 06. -------------->
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 07. -------------->
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// 08. -------------->
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// 09. -------------->
void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // ---------------
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// 10. ------------->

void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 11. ------------->
void print11(int n)
{
    int start = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

// 11. ------------->
void print12(int N)
{
    //
}

// -----------------main()------------------------
int main()
{
    // int n;
    // cout << "Enter The Number: " << endl;
    // cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);

    int t;
    cout << "Enter the Test cases: " << endl;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout << "Enter The Number: " << endl;
        cin >> n;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        // print7(n);
        // print8(n);
        // print9(n);
        // print10(n);
        // print11(n);
        print12(n);
    }
}