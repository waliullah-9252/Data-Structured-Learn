#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList{10, 20, 30, 40, 50};
    // cout<<myList.back(); //last value or tail value access kore
    // cout<<myList.front();  //first value or head value acess kore
    cout << *next(myList.begin(), 2);
    return 0;
}