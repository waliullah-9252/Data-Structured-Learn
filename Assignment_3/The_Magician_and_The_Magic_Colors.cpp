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
        string c;
        cin >> c;
        stack<char> st;
        for (char ch : c)
        {
            if (st.empty())
            {
                st.push(ch);
            }
            else if ((st.top() == 'R' && ch == 'B') || (st.top() == 'B' && ch == 'R'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
            else if ((st.top() == 'R' && ch == 'G') || (st.top() == 'G' && ch == 'R'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
            else if ((st.top() == 'B' && ch == 'G') || (st.top() == 'G' && ch == 'B'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
            else if (st.top() == ch)
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        stack<char> newSt;
        while (!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        while (!newSt.empty())
        {
            cout << newSt.top();
            newSt.pop();
        }
        cout << endl;
    }
    return 0;
}
