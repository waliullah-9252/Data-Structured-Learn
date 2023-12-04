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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akhn last null er age ase
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl;
}
void print_linked_list(Node *head)
{
    cout << endl
         << "Your Link list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl
         << "Linked list Updated" << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl
         << endl;
}
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted from position " << pos << endl
         << endl;
}
void deleted_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail: " << endl;
        cout << "Option 2: Pirnt linked list: " << endl;
        cout << "Option 3: Insert at any position: " << endl;
        cout << "Option 4: Insert at Head: " << endl;
        cout << "Option 5: Deleted from position: " << endl;
        cout << "Option 6: Deleted Head: " << endl;
        cout << "Option 7: Terminated: " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter your value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
            cout << endl;
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter your position: ";
            int pos;
            cin >> pos;
            cout << "Enter your value: ";
            int v;
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            cout << "Enter your value: ";
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter your position: ";
            cin >> pos;
            if (pos == 0)
            {
                deleted_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            deleted_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}