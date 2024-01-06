#include <bits/stdc++.h>
using namespace std;

// -------- Q. [01] -------->

int counts = 0;
string firstName, lastName;
void printMyNames(string name, string lname)
{
    if (counts == 5)
    {
        return;
    }
    cout << counts << ". " << name << " " << lname << endl;
    counts++;
    printMyNames(firstName, lastName);
}

// -------- Q. [02] -------->

int num;
int numCounter = 1;
void printNumberFrom1ToN(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << numCounter << endl;
    numCounter++;
    n--;
    printNumberFrom1ToN(n);
}

// -------- Q. [03] -------->

void printNumberFromNto1(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    n--;
    printNumberFromNto1(n);
}

// -------- Q. [04] -------->

void printing1ToNbyBacktracking(int n)
{
    if (n == 0)
    {
        return;
    }
    // n--;
    printing1ToNbyBacktracking(n - 1);
    cout << n << endl;
}

// -------- Q. [05] -------->

void printingNto1ByBacktracking(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printingNto1ByBacktracking(i + 1, n);
    cout << i << endl;
}

int main()
{
    // Q. 01. Print Names 5 times. ----->

    // cout << "Hey, please Enter Your Full Name : " << endl;
    // cin >> firstName >> lastName;
    // printMyNames(firstName, lastName);

    // ####-----####-----####-----####-----####

    // Q. 02. Print linearly from 1 to N. ----->

    // cout << "Enter The Number. " << endl;
    // cin >> num;
    // cout << "Start Printing..." << endl;
    // printNumberFrom1ToN(num);

    // ####-----####-----####-----####-----####

    // Q. 03. Print linearly from N to 1. ----->

    // cout << "Enter The Number. " << endl;
    // cin >> num;
    // cout << "Start Printing..." << endl;
    // printNumberFromNto1(num);

    // ####-----####-----####-----####-----####

    // Q. 04. Print linearly from 1 to N (By backtracking). ----->

    // cout << "Enter The Number. " << endl;
    // cin >> num;
    // cout << "Start Printing (By backtracking)..." << endl;
    // printing1ToNbyBacktracking(num);

    // ####-----####-----####-----####-----####

    // Q. 05. Print linearly from N to 1 (By backtracking). ----->

    cout << "Enter The Number. " << endl;
    cin >> num;
    cout << "Start Printing (By backtracking)..." << endl;
    printingNto1ByBacktracking(1, num);

    return 0;
}