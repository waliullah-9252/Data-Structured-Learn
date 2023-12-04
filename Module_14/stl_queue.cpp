#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    cout << "How many times of value: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your value: ";
        int val;
        cin >> val;
        q.push(val);
    }
    cout << endl;
    cout << "Show the queue value: " << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}