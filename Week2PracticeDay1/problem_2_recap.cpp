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
// checking duplicate value
int checking_duplicate(Node* head){
    int frq[100]={0};
    Node* temp=head;
    while(temp->next!=NULL){
        frq[temp->next->val]++;
        temp=temp->next;
    }
    int flag=0;
    for(int i=1;i<100;i++){
        if(frq[i]>1){
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    Node* head = NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    if(checking_duplicate(head)==1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}