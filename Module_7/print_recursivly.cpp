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
// printing recursivly soja
void print_recursivly_soja(Node *n)
{
    // base case
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursivly_soja(n->next);
}
// printing recursivly reverse
void print_recursivly_reverse(Node *n)
{
    // base case
    if (n == NULL)
        return;
    print_recursivly_reverse(n->next);
    cout << n->val << " ";
}
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
    cout << "Soja Print: ";
    print_recursivly_soja(head);
    cout << endl
         << "Reverse Print: ";
    print_recursivly_reverse(head);
    return 0;
}