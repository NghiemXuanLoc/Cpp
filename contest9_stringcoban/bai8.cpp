#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string d = s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '2' || s[i] == '8' || s[i] == 't' || s[i] == 'e' || s[i] == 'c' || s[i] == 'h')
        {
            s.erase(i, 1);
            --i;
        }
    }
    if (s.size())
    {
        cout << s << endl;
    }
    else
        cout << "EMPTY" << endl;
}