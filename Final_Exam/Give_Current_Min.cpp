#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int command;
        cin>>command;
        if(command == 0)
        {
            int val;
            cin>>val;
            pq.push(val);
            cout<<pq.top();
        }
        else if(command == 1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
                continue;
            }
            cout<<pq.top();
        }
        else if(command == 2)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
                continue;
            }
            pq.pop();
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
                continue;
            }
            cout<<pq.top();
        }
        cout<<endl;
    }
    return 0;
}