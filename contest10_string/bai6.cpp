// #include <iostream>
// #include <set>
// #include <string>

// using namespace std;

// int main()
// {
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     set<char> se1, se2;

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     for (int i = 0; i < s1.size(); i++)
//     {
//         se1.insert(s1[i]);
//     }
//     for (int i = 0; i < s2.size(); i++)
//     {
//         se2.insert(s2[i]);
//     }

//     for (int i = 0; i < s1.size(); i++)
//     {
//         auto it = se2.find(s1[i]);
//         if (it == se2.end())
//         {
//             cout << s1[i];
//             se2.insert(s1[i]);
//         }
//     }
//     cout << endl;

//     for (int i = 0; i < s2.size(); i++)
//     {
//         auto it = se1.find(s2[i]);
//         if (it == se1.end())
//         {
//             cout << s2[i];
//             se1.insert(s2[i]);
//         }
//         }
//     cout << endl;
// }

#include <iostream>
#include <string>

using namespace std;

int dem1[256], dem2[256];

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        dem1[s1[i]] = 1;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        dem2[s2[i]] = 1;
    }

    for (int i = 0; i < 256; i++)
    {
        if (dem1[i] && dem2[i] == 0)
        {

            cout << (char)i;
        }
    }
    cout << endl;

    for (int i = 0; i < 256; i++)
    {
        if (dem2[i] && dem1[i] == 0)
        {

            cout << (char)i;
        }
    }
    cout << endl;
}