#include<iostream>
#include<queue>
using namespace std;

class Node
{
    int data;
    Node *l;
    Node *r;

    Node(int value)
    {
       data = value;
       l = r = NULL;
    }

};

int main()
{
  int x;
  cout<<"Enter A Root Value : ";
  cin>>x;
  int first , second;
  queue<Node*>q;
  Node *root = new Node(x);
}