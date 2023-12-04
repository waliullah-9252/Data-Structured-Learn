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
// convert array to bst
Node *convert_bst(int a[], int n, int l, int r)
{
    // base case
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert_bst(a, n, l, mid - 1);
    Node *rightRoot = convert_bst(a, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
// level order print
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
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    Node *root = convert_bst(a, n, 0, n - 1);
    level_order(root);
    return 0;
}