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
void Insert_at_tail(Node *&head, int v)
{
    cout << endl;
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl<<endl;
        return;
    }
    // null er last er ager ghore jabe
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" <<endl<< endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl<<endl<<"Linked list Updated"<<endl
         << endl;
}
void inserted_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail: " << endl;
        cout << "Option 2: Print linked list: " << endl;
        cout << "Option 3: Insert at any position: " << endl;
        cout << "Option 4: Termined: " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter your value: ";
            int v;
            cin >> v;
            Insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter your Position: ";
            int pos;
            cin >> pos;
            cout << "Enter your value: ";
            int v;
            cin >> v;
            inserted_at_position(head, pos, v);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}