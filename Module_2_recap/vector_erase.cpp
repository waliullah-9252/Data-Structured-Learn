#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,56,4,8};
    v.erase(v.begin()+3); //single erase
    v.erase(v.begin()+1,v.begin()+3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}