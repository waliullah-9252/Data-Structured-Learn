#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // while (n > 0)//(O_logN)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    //     n /= 10;
    // }
    for (int i = 1; i <= n; i *= 2)//O_logN
    {
        cout << i << endl;
    }
    return 0;
}