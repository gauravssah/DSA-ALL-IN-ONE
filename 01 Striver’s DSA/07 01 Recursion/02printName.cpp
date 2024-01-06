#include <iostream>
using namespace std;

int counter = 1;
void printingTheName(int n, string name)
{
    if (counter > n)
    {
        return;
    }
    cout << counter << ": " << name << endl;
    counter++;
    printingTheName(n, name);
}

int main()
{
    string name;
    cout << "Enter Your Name: " << endl;
    cin >> name;
    cout << "Enter The Number of Times : " << endl;
    int n;
    cin >> n;

    printingTheName(n, name);
    cout << "End." << endl;
    return 0;
}