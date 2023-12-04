#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // node constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    // (*head).next=a;
    head->next=a;
    a->next=b;
    b->next=c;

    cout<<head->val<<endl;
    // cout<<(*head).val<<endl;
    cout<<head->next->val<<endl;
    // cout<<(*(*head).next).val<<endl;
    cout<<a->next->val<<endl;
    cout<<a->next->next->val<<endl;
    return 0;
}