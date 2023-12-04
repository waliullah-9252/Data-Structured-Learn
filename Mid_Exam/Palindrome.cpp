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
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// insert at new tail
void insert_at_new_tail(Node *&newHead, Node *&newTail, int val)
{
    Node *newNode = new Node(val);
    if (newTail == NULL)
    {
        newHead = newNode;
        newTail = newNode;
        return;
    }
    newTail->next = newNode;
    newTail = newNode;
}
// reverse
void reverse(Node *&head, Node *current)
{
    // base case
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insert_at_new_tail(newHead, newTail, temp->val);
        temp = temp->next;
    }
    reverse(newHead, newHead);
    temp = head;
    Node *temp2 = newHead;
    int flag = true;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}