#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *l;
    node *r;

    public:
    node(int d)
    {
       data = d;
       l = NULL;
       r = NULL;
    }


    void Preorder(node *root)
    {
       if(root == NULL)
       {
        return;
       }
       cout<<root->data<<" ";
       Preorder(root->l);
       Preorder(root->r);
    }


    void Inorder(node *root)
    {
       if(root == NULL)
       {
        return;
       }
       Inorder(root->l);
       cout<<root->data<<" ";
       Inorder(root->r);
    }


    void Postorder(node *root)
    {
       if(root == NULL)
       {
        return;
       }
       Postorder(root->l);
       Postorder(root->r);
       cout<<root->data<<" ";
    }
};

int main()
{
    node *root = new node(10);
    root->l = new node(20);
    root->r = new node(30);

    cout << "Preorder Traversal: ";
    root->Preorder(root);  

    cout << "\nInorder Traversal: ";
    root->Inorder(root);  

    cout << "\nPostorder Traversal: ";
    root->Postorder(root);  
}