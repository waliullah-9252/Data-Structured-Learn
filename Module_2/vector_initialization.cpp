#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v; //type 1
    // vector<int>v(5); //type 2
    // vector<int>v(5,3); //type 3
    // vector<int>v2(5,30); //type 4
    // vector<int>v(v2);  //type 4
    int a[6]={20,53,45,87,47,45}; //type 5
    vector<int>v(a,a+6);    //type 5
    // vector<int>v={2,5,69,56};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;

    return 0;
}