#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string temp = "";
    cin >> s;
    int ans = 0;
    for (char x : s)
    {
        ans += x - '0';
    }
    temp += s[s.size() - 1];
    int res = stoi(temp);
    if (res % 2 == 0 && ans % 3 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}