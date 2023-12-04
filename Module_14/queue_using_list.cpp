#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_front();
    }
    int front()
    {
        return myList.front();
    }
    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        return myList.empty();
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    cout << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}