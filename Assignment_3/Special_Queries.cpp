#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> qt;
    int q;
    cin >> q;
    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            cin >> name;
            qt.push(name);
        }
        else if (command == 1)
        {
            if (qt.empty())
            {
                cout << "Invalid" << endl;
                continue;
            }
            else if (!qt.empty())
            {
                cout << qt.front() << endl;
                qt.pop();
            }
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}