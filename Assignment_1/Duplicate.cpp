#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sorting vector array
    sort(v.begin(), v.end());
    bool flag = false;
    for (int i = 1; i <= n - 1; i++)
    {
        if (v[i] == v[i - 1])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}