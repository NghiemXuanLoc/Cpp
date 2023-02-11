#include <iostream>
#include <algorithm>
#include <string>
#include <map>

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

    if (s.size() == 1 && dem[48] == 1)
    {
        cout << (char)48 << endl;
    }
    else
        dem[48] = 0;

    for (int i = 49; i < 60; i++)
    {
        if (dem[i])
        {
            for (int j = 0; j < dem[i]; j++)
            {
                cout << char(i);
            }
        }
    }
}