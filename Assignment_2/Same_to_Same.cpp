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
void insert_tail1(Node *&head1, Node *&tail1, int v)
{
    Node *newNode = new Node(v);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = newNode;
}
// insert at tail
void insert_tail2(Node *&head2, Node *&tail2, int v)
{
    Node *newNode = new Node(v);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
}
// size
int getsize1(Node *head1)
{
    Node *temp = head1;
    int cnt1 = 0;
    while (temp != NULL)
    {
        cnt1++;
        temp = temp->next;
    }
    return cnt1;
}
// size
int getsize2(Node *head2)
{
    Node *temp = head2;
    int cnt2 = 0;
    while (temp != NULL)
    {
        cnt2++;
        temp = temp->next;
    }
    return cnt2;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    long long v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail1(head1, tail1, v);
    }
    long long val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail2(head2, tail2, val);
    }
    long long int count1 = getsize1(head1);
    long long int count2 = getsize2(head2);
    if (count1 == count2)
    {
        while (head1 != NULL && head2 != NULL)
        {
            if (head1->val != head2->val)
            {
                cout << "NO" << endl;
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}