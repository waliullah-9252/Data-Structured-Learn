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
// input level order binary tree
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

        // 2nd kaj holo sokal kaj sompunno kora
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

        // 3rd kaj holo kaj seshe abr root node ta queue ba line diya dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// print tree reverse order left to right
void print_tree_reverse(Node *root)
{
    // base case
    if (root == NULL)
        return;

    // level order print
    queue<Node *> q;
    if (root)
        q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        // 1st kaj holo q ke root thake bahire ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo jabotiyo kaj kora
        v.push_back(p->val);

        // 3rd kaj holo kaj seshe abr root node ta ke queue ba line diya dawa
        if (p->right)
            q.push(p->right);
        if (p->left)
            q.push(p->left);
    }
    reverse(v.begin(), v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
}
int main()
{
    Node *root = input_binary();
    print_tree_reverse(root);
    return 0;
}