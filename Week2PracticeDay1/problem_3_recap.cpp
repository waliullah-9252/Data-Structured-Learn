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
//insert at tail function
void insert_at_tail(Node* &head,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
//printing linked list
void print_linked_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//counting size
int get_size(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
//middle point count
void middle_point(Node* head,int s){
    Node* temp=head;
    if(s%2==0){
        int mid;
        mid=s/2;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else{
        int mid;
        mid=s/2+1;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        cout<<temp->val<<endl;
    }
}
int main()
{
    Node* head=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    // cout<<get_size(head)<<endl;
    // print_linked_list(head);
    middle_point(head,get_size(head));
    return 0;
}