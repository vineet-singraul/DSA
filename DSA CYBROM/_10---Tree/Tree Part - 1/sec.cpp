#include<iostream>
using namespace std;

class node{
public:
   int data;
   node *l;
   node *r;

   public:node(int d)
   {
    data = d;
    l = NULL;
    r = NULL;
   }

   void preorder(node *root)
   {
     if(root == NULL)
     {
        return;
     }

     cout<<root->data<<"\t";
     preorder(root->l);
     preorder(root->r);
   }
};
int main()
{
   node *root = new node(10); 
   root->l = new node(20);
   root->r = new node(30);

}

// preorder or post ka banao 