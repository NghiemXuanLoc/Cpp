#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dem[256];

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (dem[i])
        {
            cout << (char)i << " " << dem[i] << endl;
        }
    }

    cout << endl;

    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]])
        {
            cout << s[i] << " " << dem[s[i]] << endl;
            dem[s[i]] = 0;
        }
    }
}