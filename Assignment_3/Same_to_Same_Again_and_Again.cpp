#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q, q1, q2;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        q2.push(q.front());
        q.pop();
    }
    if (q1 == q2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}