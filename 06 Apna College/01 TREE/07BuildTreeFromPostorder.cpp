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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
};

struct Node *buildTree(int postorder[], int inoder[], int end, int start)
{
    static int idx = end;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[idx];
    idx--;
    struct Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(inoder, start, end, curr);
    node->right = buildTree(postorder, inoder, end, pos + 1);
    node->left = buildTree(postorder, inoder, pos - 1, start);
    return node;
};

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
};

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inoder[] = {4, 2, 1, 5, 3};

    // buliding tree

    struct Node *root = buildTree(postorder, inoder, 4, 0);
    inorderPrint(root);

    return 0;
};
