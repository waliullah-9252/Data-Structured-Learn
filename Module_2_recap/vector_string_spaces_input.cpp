#include<bits/stdc++.h>
using namespace std;
int main()
{
    //first type
    // int n; cin>>n;
    // cin.ignore();
    // vector<string>v;
    // for(int i=0;i<n;i++){
    //     string x;
    //     getline(cin,x);
    //     v.push_back(x);
    // }
    // for(string val:v){
    //     cout<<val<<endl;
    // }

    //second type
    int n; cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<n;i++){
        getline(cin,v[i]);
    }
    for(string val:v){
        cout<<val<<endl;
    }
    return 0;
}