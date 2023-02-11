#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string hoa(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = toupper(t[i]);
    }
    return t;
}

string thuong(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

int main()
{
    string s;
    getline(cin, s);
    string t = s;
    cout << hoa(t) << endl << thuong(s) << endl;
}