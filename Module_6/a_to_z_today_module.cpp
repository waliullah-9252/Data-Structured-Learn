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
// insert at tail function
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}
// linked list printing
void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Your linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl
         << "Linked list updated" << endl
         << endl;
}
// insert at any position
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}
// insert at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Insert at head" << endl
         << endl;
}
// deleted at any positon
void delete_at_any_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted from position " << pos << endl
         << endl;
}
// deleted at head
void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted from head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail: " << endl;         // done
        cout << "Option 2: Print linked list: " << endl;      // done
        cout << "Option 3: Insert at any position: " << endl; // done
        cout << "Option 4: Insert at Head: " << endl;         // done
        cout << "Option 5: Deleted at any position: " << endl;
        cout << "Option 6: Deleted at Head: " << endl;
        cout << "Option 7: Terminated: " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter your value: ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter your position: ";
            cin >> pos;
            int v;
            cout << "Enter your value: ";
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
            int v;
            cout << "Enter your value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter your Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_at_head(head);
            }
            else
            {
                delete_at_any_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_at_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}