#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["Virat Kholi"] = 18; // O(Log N)
    mp["Rohit Sharma"] = 45;
    mp["MS Dhoni"] = 7;
    mp["Tamim Iqbal"] = 28;

    for(auto it=mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
        //O(logN)
    }

    cout<<mp["Virat Kholi"]<<endl;

    // cout<< mp["Virat Kholi"]<<endl;


    // mp.insert({"Virat Kholi",18});
    // mp.insert({"Rohit Sharma",45});
    // mp.insert({"MS Dhoni",7});
    // mp.insert({"Shakib Al Hasan",75});
    // mp.insert({"Tamim Iqbal",28});

    // if(mp["Shakib Al Hasan"])
    // {
    //     cout<<"YES"<<endl;
    // }
    // else 
    // {
    //     cout<<"NO"<<endl;
    // }

    // cout<< mp["Sakib Al Hasan"]<<endl;

    // cout<< mp["Virat Kholi"]<<endl;
    // cout<<mp["Rohit Sharma"]<<endl;
    // cout<<mp["MS Dhoni"]<<endl;
    // cout<<mp["Tamim Iqbal"]<<endl;

    // for(auto it=mp.begin(); it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}