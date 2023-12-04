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
void insert_at_tail1(Node *&head1, Node *&tail1, int val)
{
    Node *newNode = new Node(val);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    newNode->prev = tail1;
    tail1 = tail1->next;
}
// insert at tail
void insert_at_tail2(Node *&head2, Node *&tail2, int val)
{
    Node *newNode = new Node(val);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    newNode->prev = tail2;
    tail2 = tail2->next;
}
// print left to right
void print_normal(Node *head1)
{
    Node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// print right to left
void print_reverse(Node *tail1)
{
    Node *temp = tail1;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
//size
int get_size(Node*head1){
    Node*temp=head1;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
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
        insert_at_tail1(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail2(head2, tail2, val2);
    }
    // print_normal(head1);
    // print_reverse(tail1);
    // print_normal(head2);
    // print_reverse(tail2);
    int count1=get_size(head1);
    int count2=get_size(head2);
    Node *temp1 = head1;
    Node *temp2 = head2;
    int flag = false;
    if(count1 == count2)
    {
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val == temp2->val)
            {
                flag = true;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}