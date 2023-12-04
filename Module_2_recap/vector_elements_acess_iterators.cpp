#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    // cout<<v[0];  //1st index easy mehtod
    // cout<<v.front(); //1st index hard method
    // cout<<v[v.size()-1]; //last index hard method
    // cout<<v.back(); //last index easy method

    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}