#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    // cout << st.top() << endl;
    st.pop();
    // cout << st.top() << endl;
    st.pop();
    if (!st.empty())
    {
        // cout << st.top() << endl;
        st.pop();
    }
    st.push(40);
    st.push(50);
    st.pop();
    st.push(60);
    st.pop();
    st.push(70);
    st.push(90);
    st.pop();
    cout<<st.top()<<endl;
    // stack<int> st;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cin >> val;
    //     st.push(val);
    // }
    // cout << endl;
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    return 0;
}