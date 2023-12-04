#include <bits/stdc++.h>
using namespace std;

//using stl stack and queue
bool isSame(stack<int> st, queue<int> q)
{
    if (st.size() != q.size())
    {
        return false;
    }
    else if (st.size() == q.size())
    {
        while (!st.empty())
        {
            int j = st.top();
            st.pop();
            int k = q.front();
            q.pop();
            if (j != k)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool equal = isSame(st, q);
    if (equal)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}