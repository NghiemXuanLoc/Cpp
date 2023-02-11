#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    string t = "python";
    int i = 0;
    for (char x : s)
    {
        if (x == t[i])
        {
            ++i;
        }
    }
    if (i >= 6)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}