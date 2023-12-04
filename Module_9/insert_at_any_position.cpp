#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    // node constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// print left to right
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// print right to left
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// insert at any position
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;    // 100->30
    temp->next = newNode;          // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = temp;          // 20<-100
}
// size at the doubly linked list
int getsize(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection doubly link list
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cout << "Enter your Position: ";
    cin >> pos;
    cout << "Enter your value: ";
    cin >> val;
    if (pos >= getsize(head))
    {
        cout << endl
             << "Invalid Index." << endl;
    }
    else
    {
        insert_at_any_position(head, pos, val);
    }

    cout << endl
         << "Print left to right: ";
    print_normal(head);
    cout << endl;
    cout << "Print right to left: ";
    print_reverse(tail);

    return 0;
}