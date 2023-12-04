#include <bits/stdc++.h>
using namespace std;

//using stack list
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.empty())
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    myStack st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    int flag = true;
    if (st1.size() != st2.size())
    {
        flag = false;
    }
    else if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            int j = st1.top();
            st1.pop();
            int k = st2.top();
            st2.pop();
            if (j != k)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}