#include <bits/stdc++.h>
using namespace std;

//using stl queue
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    stack<int> st;
    while (!q.empty())
    {
        int j = q.front();
        q.pop();
        st.push(j);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}