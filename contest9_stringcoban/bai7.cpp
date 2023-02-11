#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, a, b;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            a += s[i];
        }
        else
            b += s[i];
    }
    for (char x : a)
    {
        cout << x;
    }
    cout << endl;
    for (char x : b)
    {
        cout << x;
    }
    cout << endl;
}