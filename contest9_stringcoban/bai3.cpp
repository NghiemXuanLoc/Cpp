#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            sum += s[i] - '0';
        }
    }
    cout << sum << endl;
}