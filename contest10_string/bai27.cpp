#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 1, res = 1;
    string ans = "";
    string temp = "";
    temp += s[0];
    ans += s[0];
    s += s[s.size() - 1];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            temp += s[i];
            cnt++;
        }
        else
        {
            if (cnt > res)
            {
                res = cnt;
                ans = temp; // tao 1 xau co res ki tu s[i - 1];
            }
            else if (cnt == res)
            {
               if (temp > ans)
               {
                ans = temp;
               }
               
            }
            cnt = 1;
            temp = "";
            temp += s[i];
        }
    }
    cout << ans << endl;
}