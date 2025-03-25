#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *l;
    Node *r;

    public:
    Node(int d)
    {
       data = d;
       l = NULL;
       r = NULL;
    }
};

int main()
{
    Node *root = new Node(10);
    root->l = new Node(20);
    root->r = new Node(30);
      
    cout<<root->data;

}