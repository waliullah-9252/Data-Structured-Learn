#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Enter the string size: ";
    cin >> size;

    string str;
    cout << "Enter the string: ";
    for(int i=0;i<size;i++){

    cin >> str[i];
    }
    for(int i=0;i<size;i++){

    cout << str[i];
    }

    return 0;
}
