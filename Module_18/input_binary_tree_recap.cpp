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
// input binary function by level order
Node *input_binary()
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
        // 1st kaj holo q ke bahire ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj sesh kora
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
        p->right = myRight;
        p->left = myLeft;

        // 3rd kaj holo sob kaj seshe abr root er value ta ke line ba queue te diya dawa
        if (p->right)
            q.push(p->right);
        if (p->left)
            q.push(p->left);
    }
    return root;
}
// print the binary tree by level order
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree Empty";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1st kaj holo q ke bahir a ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj sesh kora
        cout << p->val << " ";

        // 3rd kaj holo root er kaj sehesh abr root er value ta ke line ba q te diye dawa
        if (p->right)
            q.push(p->right);
        if (p->left)
            q.push(p->left);
    }
}
int main()
{
    Node *root = input_binary();
    level_order(root);
    return 0;
}