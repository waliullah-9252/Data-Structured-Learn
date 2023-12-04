#include <bits/stdc++.h>
using namespace std;

//using stl stack
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    stack<int> newSt;
    while (!st.empty())
    {
        int j = st.top();
        st.pop();
        newSt.push(j);
    }
    while (!newSt.empty())
    {
        cout << newSt.top() << " ";
        newSt.pop();
    }
    return 0;
}