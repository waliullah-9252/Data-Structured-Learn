#include <bits/stdc++.h>
using namespace std;
// using stack array
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    myStack newSt;
    while (!st.empty())
    {
        int j = st.top();
        st.pop();
        newSt.push(j);
    }
    while (!newSt.empty())
    {
        cout << newSt.top()<<" ";
        newSt.pop();
    }
    return 0;
}