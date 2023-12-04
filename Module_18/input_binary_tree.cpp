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
// input binary function
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
        // 1st kaj holo q ke bahir kore ana
        Node *p = q.front();
        q.pop();

        // 2nd holo jabotiyo kaj ai khane kora
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

        p->left = myLeft;
        p->right = myRight;

        // 3rd holo root er kaj shesh child gula abr line a dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// print function by level order
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
        // 1st kaj holo q bahir kore ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj kora
        cout << p->val << " ";

        // 3rd kaj holo kaj shesh hole tar children gula abar line diya dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    Node *root = input_binary();
    level_order(root);
    return 0;
}