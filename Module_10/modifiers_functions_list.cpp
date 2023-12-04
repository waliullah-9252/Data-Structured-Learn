#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList{10, 20, 30, 40, 30, 60, 30, 80};
    // list<int> newList{50,60,70};
    // newList = myList;  //shortcut
    // newList.assign(myList.begin(),myList.end());
    // myList.push_back(100);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.pop_front();
    // myList.insert(myList.begin()+2,100);
    // myList.insert(next(myList.begin(),2),100);
    // myList.insert(next(myList.begin(),2),{100,200,300});
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());
    // myList.erase(next(myList.begin(),2),next(myList.end(),6));
    // replace(myList.begin(),myList.end(),30,1000);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 50);
    // cout<<*it;
    if (it == myList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}