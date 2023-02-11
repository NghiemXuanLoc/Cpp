#include <iostream>
#include <string>

using namespace std;

// chuyen xau thanh in thuong

string lower(string s)
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
    int cnt = 0;
    string s;
    getline(cin, s);
    string a = "28tech";
    string t = lower(s);

    while (t.find(a) != string::npos)
    {
        int b = t.find(a);
        cnt++;
        t.erase(b, 6);
    }
    cout << cnt << endl;
}