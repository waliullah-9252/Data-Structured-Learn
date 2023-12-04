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
// input binary tree by level order
Node *binary_input()
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
        // 2nd kaj holo sokol kaj kora
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

        // 3rd kaj holo kaj seshe abar root node ta ke abr queue ba line diye dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// print maximum and minimum leaf nodes value
void max_and_min_leaf(Node *root, int &maxLeafNode, int &minLeafNode)
{
    // base case
    if (root == NULL)
        return;

    // print level order
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1st kaj holo q ke root thake bahir kore ana
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo sokol kaj kora
        if (p->left == NULL && p->right == NULL)
        {
            maxLeafNode = max(maxLeafNode, p->val);
            minLeafNode = min(minLeafNode, p->val);
        }

        // 3rd kaj holo kaj seshe abr root node ta ke  abr queue ba line a diye dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    Node *root = binary_input();
    int maxLeafNode = INT_MIN;
    int minLeafNode = INT_MAX;
    max_and_min_leaf(root, maxLeafNode, minLeafNode);
    cout << maxLeafNode << " " << minLeafNode;
    return 0;
}