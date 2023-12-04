#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << v.size() << endl;
    // v.clear();
    for (int i = 0; i < v.size(); i++)
    { // original size
        cout << v[i] << " ";
    }
    // first resize decrease
    v.resize(2);
    cout << endl
         << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // and then agian resize increase
    v.resize(7, 50);
    cout << endl
         << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout<<v[4]<<endl;

    return 0;
}