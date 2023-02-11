#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    int max_val = 0;
    int max_val2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        max_val = max(max_val, mp[a[i]]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] < max_val)
        {
            max_val2 = max(max_val2, mp[a[i]]);
        }
    }
    if (max_val2 == -1)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        for (auto x : mp)
        {
            if (x.second == max_val2)
            {
                cout << x.first << " ";
            }
        }
    }
}