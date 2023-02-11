#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 1, res = 1;
    string ans = " ";
    ans += s[0];
    s += '@';
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > res)
            {
                res = cnt;
                ans = string(res, s[i - 1]); // tao 1 xau co res ki tu s[i - 1];
            }
            else if (cnt == res)
            {
                string temp = string(res, s[i - 1]);
                if (temp > ans)
                {
                    ans = temp;
                }
            }
            cnt = 1;
        }
    }
    cout << ans << endl;
}