#include <bits/stdc++.h>
using namespace std;
int main()
{
    // first type
    //  int n;
    //  cin >> n;
    //  vector<string> v;
    //  for (int i = 0; i < n; i++)
    //  {
    //      string s;
    //      cin >> s;
    //      v.push_back(s);
    //  }
    //  for (string val : v)
    //  {
    //      cout << val << endl;
    //  }

    // second type
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (string val : v)
    {
        cout << val << endl;
    }
    return 0;
}