#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void lat(string s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        cout << s[i];
    }
    
}

string vt(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

string vh(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    lat(s);
    cout << endl;
    cout << vt(s) << endl;
    cout << vh(s) << endl;
}
