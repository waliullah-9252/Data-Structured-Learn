#include <bits/stdc++.h>
using namespace std;
//using stl stack and queue
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
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag=true;
    if (st.size() != q.size())
    {
        flag = false;
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
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}