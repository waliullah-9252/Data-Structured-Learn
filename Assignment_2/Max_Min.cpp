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
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// minimum value check
int min_value_print(Node *head)
{
    Node *temp = head;
    int mn = INT_MAX;
    while (temp != NULL)
    {
        if (temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }
    return mn;
}
// maximum value check
int max_value_print(Node *head)
{
    Node *temp = head;
    int mx = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    return mx;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }
    cout << max_value_print(head);
    cout << " ";
    cout << min_value_print(head);
    return 0;
}