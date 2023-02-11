#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp = "";
    int res = -1;
    if (s.size() > 1)
    {
        temp += s[s.size() - 2];
        temp += s[s.size() - 1];
        res = stoi(temp);
    }
    else
    {
        if (s[0] == '0')
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (res % 25 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}