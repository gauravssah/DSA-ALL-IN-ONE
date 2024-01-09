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

// Number of Nodes.
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
};

// Sum of all the nodes in a Binary tree.

int sumOfNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
};

void printTheTreeInorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printTheTreeInorder(root->left);
    cout << root->data << " ";
    printTheTreeInorder(root->right);
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "countNodes: " << countNodes(root) << endl;
    cout << "sumOfNodes :" << sumOfNodes(root) << endl;

    return 0;
};