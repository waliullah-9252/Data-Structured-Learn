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
// input binary level order
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
        // 1st kaj holo q ke bahire kora
        Node *p = q.front();
        q.pop();

        // 2nd kaj holo sob kaj kora
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

        // 3rd kaj holo kaj seshe abar root node ta ke line ba queue te diya dawa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
// sum of the all nodes value
int sum_of_the_all_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int sum = 0;
    sum = root->val;
    sum += sum_of_the_all_nodes(root->left);
    sum += sum_of_the_all_nodes(root->right);
    return sum;
}
int main()
{
    Node *root = binary_input();
    int result = sum_of_the_all_nodes(root);
    cout << result;
    return 0;
}