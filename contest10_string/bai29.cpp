#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    s += 'a';
    vector<string> v;
    string temp = "";

    for (char x : s)
    {
        if (isdigit(x))
        {
            temp += x;
        }
        else
        {

            while ((temp.size() > 1) && (temp[0] == '0'))
            {
                temp.erase(0, 1);
            }
            if (temp != "")
            {
                v.push_back(temp);
            }
            temp = "";
        }
    }
    ll ans = 0;
    for (string x : v)
    {
        ans += stoll(x);
    }
    cout << ans << endl;
}