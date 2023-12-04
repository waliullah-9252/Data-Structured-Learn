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
}
//size count
int get_size(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
// checking duplicate value
int checking_duplicate(Node *head)
{
    Node* temp=head;
    int flag=0;
    while(temp!=NULL){
        Node* temp2=temp->next;
        while(temp2!=NULL){
            if(temp->val==temp2->val){
                flag=1;
            }
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    return flag;
}
int main()
{
    Node *head = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
    }
    if (checking_duplicate(head) == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}