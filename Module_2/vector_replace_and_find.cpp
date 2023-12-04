#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    //  vector<int>v={1,2,2,4,5,8,67,67,68,2,54,68,4,2};
    //  replace(v.begin(),v.end()-5,2,50);
    //  for(int x:v){
    //      cout<<x<<" ";
    //  }

    // find
    vector<int> v = {1, 2, 2, 4, 5, 8, 67, 67, 68, 2, 54, 68, 4, 2};
    // vector<int>::iterator it;
    // auto it;
    auto it = find(v.begin(), v.end(), 42);
    // cout << *it;
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}