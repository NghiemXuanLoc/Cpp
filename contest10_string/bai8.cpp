#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int dem[130];

string check(string s)
{
    string t = s;

    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

// int main()
// {
//     string s;
//     cin >> s;
//     string t = check(s);
//     for (int i = 0; i < 130; i++)
//     {
//         dem[i] = -1;
//     }

//     for (int i = 0; i < t.size(); i++)
//     {
//         dem[t[i]]++;
//     }

//     int ok = 1;

//     for (int i = 97; i < 123; i++)
//     {
//         if (dem[i] == -1)
//         {
//             ok = 0;
//         }
//     }

//     if (ok)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
// }

// cach so 2

int main()
{
    string s;
    cin >> s;
    string t = check(s);

    set<char> se;

    for (int i = 0; i < t.size(); i++)
    {
        se.insert(t[i]);
    }
    if (se.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}