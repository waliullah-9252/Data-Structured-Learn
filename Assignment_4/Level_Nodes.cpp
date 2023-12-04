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

// level nodes print
void levelNodePrint(Node *root)
{
    // base case
    if (root == NULL)
        return;

    // level order print
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    bool flag = false;
    while (!q.empty())
    {
        // 1st kaj holo q ke root node thake bahire ana
        pair<Node *, int> p = q.front();
        Node *node = p.first;
        int level = p.second;
        q.pop();

        // 2nd kaj holo jabotiyo kaj sesh kora
        int x;
        cin >> x;
        if (level == x)
        {
            cout << node->val << " ";
            flag = true;
        }

        // 3nd kaj holo kaj seshe abar root node ta ke line ba queue te diye dawa
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    // not match x and level
    if (!flag)
        cout << "Invalid";
}

int main()
{
    Node *root = input_binary();
    levelNodePrint(root);
    return 0;
}
