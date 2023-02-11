#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int temp = s.size();
    if (temp > 2)
    {
        if (temp % 3 == 1)
        {
            cout << s[0] << ",";
            s.erase(0, 1);
            if (s.size() > 3)
            {
                for (int i = 3; i < s.size(); i += 4)
                {
                    if (i <= s.size() - (s.size() % 3))
                    {
                        s.insert(i, ",");
                    }
                }
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
        else if (temp % 3 == 2)
        {
            cout << s[0] << s[1] << ",";
            s.erase(0, 2);
            if (s.size() > 3)
            {
                for (int i = 3; i < s.size(); i += 4)
                {
                    if (i <= s.size() - (s.size() % 3))
                    {
                        s.insert(i, ",");
                    }
                }
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
        else
        {
            if (s.size() > 3)
            {
                for (int i = 3; i < s.size(); i += 4)
                {
                    if (i <= s.size() - (s.size() % 3))
                    {
                        s.insert(i, ",");
                    }
                }
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
    }
    else
        cout << s << endl;
}
