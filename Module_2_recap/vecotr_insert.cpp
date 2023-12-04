#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    vector<int>x{4,5,6,8,7};
    // v.insert(v.begin()+2,100); //single insert
    v.insert(v.begin()+2,x.begin(),x.end()); //multiple insert
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}