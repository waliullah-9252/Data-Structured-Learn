#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // node constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    // cout << b.val << endl;
    // cout << c.val << endl;
    // cout << (*a.next).val << endl;
    // cout << (*b.next).val << endl;
    cout << a.next->val << endl;
    // cout << b.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}