#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>x={1,2,3,4};
    vector<int>v={10,20,30,40};
    v.pop_back();
    v.pop_back();
    // v=x; //O(N)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}