#include <iostream>
#include <string>

using namespace std;

bool check(string s)
{

    // so tang
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i + 1] < s[i])
        {
            return false;
        }
    }
    return true;
}
bool check2(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i + 1] > s[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (check(s) || check2(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}