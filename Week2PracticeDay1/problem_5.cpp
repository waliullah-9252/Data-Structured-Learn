#include<bits/stdc++.h>
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
}
// printing linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
//sorting value check
int sorting_value_check(Node* head){
    Node* temp=head;
    int flag=1;
    while (temp->next!=NULL)
    {
        if(temp->val>temp->next->val){
            flag=0;
            break;
        }
        temp=temp->next;
    }
    return flag;
    
}
int main()
{
    Node* head=NULL;
    int v;
    while(1){
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    if(sorting_value_check(head)==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    // print_linked_list(head);
    return 0;
}