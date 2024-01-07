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

Node *searchInBST(Node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    };

    if (root->data == key)
    {
        return root;
    };

    if (root->data > key)
    {
        return searchInBST(root->left, key);
    };

    return searchInBST(root->right, key);
};

int main()
{
    struct Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    while (true)
    {
        int num;
        cout << "Enter The Number the you want to search in this tree." << endl;
        cin >> num;
        if (searchInBST(root, num) == NULL)
        {
            cout << "Data not found!" << endl;
        }
        else
        {
            cout << "Key Exit.." << endl;
        }
    }

    return 0;
}