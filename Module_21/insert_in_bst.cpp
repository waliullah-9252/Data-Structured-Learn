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
//input binarty tree
Node* input_binary_tree(){
    int v;
    cin>>v;
    Node* root;
    if(v == -1) root = NULL;
    else root = new Node(v);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
//print level order
void levelOrder(Node* root)
{
    if(root == NULL)
    {
        cout<<"Tree Not Found"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
//insert binary search tree
void insert_bst(Node* &root,int x)
{
    //base case
    if(root == NULL)
    {
        root = new Node(x);
        return;
    }
    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_bst(root->left,x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_bst(root->right,x);
        }
    }
}
int main()
{
    Node* root = input_binary_tree();
    // int x;
    // cin>>x;
    insert_bst(root,32);
    insert_bst(root,22);
    insert_bst(root,13);
    insert_bst(root,27);
    levelOrder(root);
    return 0;
}