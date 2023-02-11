#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (char x : s)
    {
        ans += x - '0';
    }
    string temp = "";
    temp += s[s.size() - 1];
    int res = stoi(temp);
    if ((ans % 3 == 0) && (res == 0 || res == 5))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}