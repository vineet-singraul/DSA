#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *l;
    node *r;

    node(int d) {
        data = d;
        l = NULL;
        r = NULL;
    }

    void preorder(node *root) {
        if (root == NULL) {
            return;
        }
        cout << root->data << " ";
        preorder(root->l);
        preorder(root->r);
    }

    void postorder(node *root) {
        if (root == NULL) {
            return;
        }
        postorder(root->l);
        postorder(root->r);
        cout << root->data << " ";
    }
};

int main() {
    node *root = new node(10);
    root->l = new node(20);
    root->r = new node(30);
    root->l->l = new node(40);
    root->l->r = new node(50);
    root->r->l = new node(60);
    root->r->r = new node(70);

    cout << "Preorder Traversal: ";
    root->preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    root->postorder(root);
    cout << endl;

}
