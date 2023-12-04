#include <bits/stdc++.h>
using namespace std;
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
    cout << "Enter your Value: ";
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.push(x);
    // }
    while (true)
    {
        for (int i = 0; i < n; i++)
        {

            cout << "Option 1: Push: " << endl;
            cout << "Option 2: Pirnt: " << endl;
            cout << "Option 3: Pop" << endl;
            cout << "Option 4: Exit" << endl;
            int op;
            cin >> op;
            if (op == 1)
            {

                cout << "Enter your value: ";
                int v;
                cin >> v;
                st.push(v);
                cout << endl;
                if (n >= INT_MAX)
                {
                    cout << "Stack is Full!" << endl;
                }
            }
            else if (op == 2)
            {
                while (!st.empty())
                {
                    cout << "Total add value: " << st.top() << " ";
                    st.pop();
                }
            }
            else if (op == 3)
            {
                while (!st.empty())
                {
                    st.pop();
                }
            }
            else if (op == 4)
            {
                break;
            }
        }
    }

    return 0;
}