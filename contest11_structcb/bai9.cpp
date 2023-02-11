#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

struct sv
{
    string ten, ns, dc;
    float gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> gpa;
    }

    void in()
    {
        cout << dc << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    sv a[n];
    map<string, int> mp;
    int max_val = 0;

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
        mp[a[i].dc]++;
        max_val = max(max_val, mp[a[i].dc]);
    }
    for (auto x : mp)
    {
        if (x.second == max_val)
        {
            cout << x.first << endl;
        }
    }
}