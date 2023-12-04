#include<bits/stdc++.h>
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
//count nodes a binary tree
int countNodes(Node* root)
{
    if(root == NULL) return 0;
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l+r+1;
}
//max height count
int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}
//perfect binary tree
int perfectBinaryTree(Node* root)
{
    if(root == NULL) return 0;
    int height = maxHeight(root);
    int totalNodes = pow(2,height)-1;
    return totalNodes;
}
int main()
{
    Node* root = input_binary();
    countNodes(root);
    maxHeight(root);
    perfectBinaryTree(root);
    if(countNodes(root) == perfectBinaryTree(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}