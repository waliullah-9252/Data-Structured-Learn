#include <bits/stdc++.h>
using namespace std;
int isValid(stack<char> st, string s)
{
    for (char ch : s)
    {
        if(st.empty()) st.push(ch); 
        else if (!st.empty() && st.top() != ch)
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    return st.empty();
}
int main()
{
    stack<char> st;
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        int valid = isValid(st, s);
        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}