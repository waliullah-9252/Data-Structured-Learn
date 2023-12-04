#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    // node constructor
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};
// insert at tail
void insert_at_tail(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
// checking visit
void checking_visit(Node *head, Node *&cur, string site)
{
    Node *newNode = new Node(site);
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->address == site)
        {
            cur = temp;
            cout << temp->address << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}
// checking next
void check_next(Node *&cur)
{
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->address << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
// checking prev
void check_prev(Node *&cur)
{
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->address << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;
    string address;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_at_tail(head, tail, address);
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string site;
            cin >> site;
            checking_visit(head, cur, site);
        }
        else if (command == "next")
        {
            check_next(cur);
        }
        else if (command == "prev")
        {
            check_prev(cur);
        }
    }

    return 0;
}