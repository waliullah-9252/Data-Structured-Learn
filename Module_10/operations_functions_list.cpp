#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList{20, 30, 50, 10, 40, 10, 60, 10};
    // myList.remove(10);
    // sort(myList.begin(),myList.end());
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();  //same type value delete kore and aita assending sort and desending sort dui tar janno kaj kore
    // myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}