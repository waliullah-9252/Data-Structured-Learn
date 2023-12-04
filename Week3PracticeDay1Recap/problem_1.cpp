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
// insert at tail
void insert_at_tail(Node *&head1, Node *&tail1, int val)
{
    Node *newNode = new Node(val);
    if (tail1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    newNode->prev = tail1;
    tail1 = tail1->next;
}
// print left to right
void print_normal(Node *head1)
{
    while (head1 != NULL)
    {
        cout << head1->val << " ";
        head1 = head1->next;
    }
    cout << endl;
}
// print right to left
void print_reverse(Node *tail1)
{
    while (tail1 != NULL)
    {
        cout << tail1->val << " ";
        tail1 = tail1->prev;
    }
    cout << endl;
}
// size
int get_size(Node *head1)
{
    int count = 0;
    while (head1 != NULL)
    {
        count++;
        head1 = head1->next;
    }
    return count;
}

// main function
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_at_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
    }

    int count1 = get_size(head1);
    int count2 = get_size(head2);
    int flag = false;
    if (count1 == count2)
    {
        while (head1 != NULL && head2 != NULL)
        {
            if (head1->val == head2->val)
            {
                flag = true;
                break;
            }
            head1=head1->next;
            head2=head2->next;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // print_normal(head1);
    // print_reverse(tail1);
    // print_normal(head2);
    // print_reverse(tail2);

    return 0;
}