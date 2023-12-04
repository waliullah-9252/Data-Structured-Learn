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
// input binary tree
Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1st kaj holo q ta ke bahire ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj kora
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // connection
        p->left = myLeft;
        p->right = myRight;

        // 3rd kaj holo kaj sheshe abr root node ta ke q ba line diye dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// print binary tree by level order
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree Not Found" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1st kaj holo q ke bahire ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj kora
        cout << p->val << " ";

        // 3rd kaj holo kaj seshe abar node er root ta q ba line a diye dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
// binary search tree
bool binary_search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return binary_search(root->left, x);
    }
    else
    {
        return binary_search(root->right, x);
    }
}
int main()
{
    while(1){
    Node *root = input_binary_tree();
    // level_order(root);
    int x;
    cin >> x;
    if (binary_search(root, x))
        cout << "Yes , Found" << endl;
    else
        cout << "No, Not Found" << endl;
    }
    return 0;
}