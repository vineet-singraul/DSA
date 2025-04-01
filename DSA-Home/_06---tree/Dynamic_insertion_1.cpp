



#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *cerate(node *root)
{
    int d;
    cout << "Enter Value :";
    cin >> d;
    root = new node(d);
    if (d == -1)
    {
        return NULL;
    }
    cout << "Enter Value For Left : " << d << "\n";
    root->left = cerate(root->left);
    cout << "Enter Value For Right : " << d << "\n";
    root->right = cerate(root->right);
    return root;
}

void Preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data<<" ";
    Preorder(root->right);
    Preorder(root->left);
}

int main()
{
    node *root = NULL;
    root = cerate(root);

    cout << "\n Pre Order : \n";
    Preorder(root);
}