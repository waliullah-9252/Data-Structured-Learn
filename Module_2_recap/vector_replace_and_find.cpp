#include<bits/stdc++.h>
using namespace std;
int main()
{
    //replace
    // vector<int>v{1,2,3,5,4,68,64,68,365,64,665};
    // replace(v.begin(),v.end(),665,400);
    // for(int val:v){
    //     cout<<val<<" ";
    // }

    //find
    vector<int>v{1,2,3,5,4,68,64,68,365,64,665};
    // vector<int>::iterator it;
    // auto it;
    auto it=find(v.begin(),v.end(),40);
    // cout<<*it;
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";
    
    return 0;
}