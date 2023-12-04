#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        int mx = 0;
        int count;
        for (int val : v)
        {
            mp[val]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            // cout<<it->first <<" "<<it->second<<endl;
            if (it->second >= mx)
            {
                mx = it->second;
                count = it->first;
            }
        }
        cout << count << " " << mx;
        cout << endl;
    }
    return 0;
}