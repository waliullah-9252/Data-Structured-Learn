#include <bits/stdc++.h>
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    //this is right approach and multiple linked value print so easy that's i use this step
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout<<endl;

    // temp=head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    // 2nd step print but some problem basically head is remove so this a right apporach that's why ignore this type step
    //  while (head != NULL)
    //  {
    //      cout << head->val << endl;
    //      head = head->next;
    //  }

    // 1st step print but big big problem
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;
    // cout << head->next->next->next->next->val << endl;
    return 0;
}