#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /*
               1
             /   \
            2     3

    */

    cout << "root : " << root << endl;
    cout << "root->data : " << root->data << endl;
    cout << "root->left : " << root->left << endl;
    cout << "root->left->data : " << root->left->data << endl;
    cout << "root->right : " << root->right << endl;
    cout << "root->right->data : " << root->right->data << endl;

    cout << endl
         << endl;
    // ------------------------------------------------------------

    /*
               1
             /   \
            2     3
          /   \
        8       6
    */

    root->left->left = new Node(8);
    root->left->right = new Node(6);

    cout << "root->left->left : " << root->left->left << endl;
    cout << "root->left->left->data : " << root->left->left->data << endl;
    cout << "root->left->right : " << root->left->right << endl;
    cout << "root->left->right->data : " << root->left->right->data << endl;

    return 0;
}