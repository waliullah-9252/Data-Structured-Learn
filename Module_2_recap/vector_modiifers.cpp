#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x{4,5,6,7};
    x.pop_back();
    x.pop_back();
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    // vector<int>x{4,5,6,7,4};
    // vector<int>v{1,2,3,4};
    // v=x; //O(N)
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    return 0;
}