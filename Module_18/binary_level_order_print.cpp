#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// level oreder function
void level_order(Node *root)
{
    // direct root print
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1st kaj holo line thake root value ber kore ana
        Node *j = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj kora
        cout << j->val << " ";

        // 3rd kaj holo root er kaj seshe children gula abr line a diya dite hobe this way to left to right value
        // if (j->left)
        //     q.push(j->left);
        // if (j->right)
        //     q.push(j->right);

        // 3rd kaj again root er kaj seshe children gula abr line a diya dite hobe this way to right to left

        if (j->right)
            q.push(j->right);
        if (j->left)
            q.push(j->left);
    }
}
int main()
{
    // create a binary tree
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    // Node *f = new Node(70);
    // Node *g = new Node(80);
    // Node *h = new Node(90);
    // Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    c->right = e;
    // a->right = h;
    // h->right = i;
    b->right = d;
    // d->left = f;
    // d->right = g;

    // level order call
    level_order(root);
    return 0;
}