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
    };
};

void inOrdertravers(struct Node *root)
{ // left | root | right

    if (root == NULL)
    {
        return;
    }

    inOrdertravers(root->left);
    cout << root->data << " ";
    inOrdertravers(root->right);
};

Node *inOrderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
};

// Deletion in BST
struct Node *deleteInBST(struct Node *root, int key)
{

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // ------------------>
        Node *temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
};

int main()
{
    struct Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    inOrdertravers(root);
    cout << endl;
    root = deleteInBST(root, 4);
    inOrdertravers(root);
    cout << endl;

    return 0;
}