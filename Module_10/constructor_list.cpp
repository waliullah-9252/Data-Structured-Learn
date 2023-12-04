#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList;
    // list<int>myList(10);
    // list<int> myList(10, 5);
    // list<int>list2{10,20,30,40,50};
    // list<int>myList(list2);
    int a[6] = {10, 20, 30, 40, 50, 60};
    // vector<int> v{1, 2, 3, 4, 5, 6};
    list<int> myList(a, a + 6);
    // list<int> myList(v.begin(), v.end());
    // cout<<myList.size();
    // cout<<myList.front();

    //long cut for loop and list er janno obbosoy itarator for loop use kora lagbe
    // how to use a long cut for loop?
    //answer: jakhon amader index lagbe ba nidristo kno pointer ke access kora lagbe takhon amader long cut foor loop use kora lagbe
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    //how to use a shortcut for loop?
    //answer: jakhon amader kno index lage na sudu value access korle hoy takon amra shortcut for loop use korbo
    // shortcut for loop
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}