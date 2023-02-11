#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include<algorithm>

using namespace std;

int main()
{
    string n;
    map<string, int> mp;
    int max_val = 0;
    while (cin>>n)
    {
        mp[n]++;
        max_val = max(max_val, mp[n]);
    }
    for (auto x : mp)
    {
        if (x.second == max_val)
        {
            cout << x.first << endl;
            break;
        }
    }
}