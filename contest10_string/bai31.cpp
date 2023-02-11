#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string temp = "";
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        temp += s[i];
        ans += stoi(temp);
        temp = "";
    }
    cout << ans << endl;
}