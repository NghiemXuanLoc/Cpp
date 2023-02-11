#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// ham lat nguoc

string ln(string s)
{
    int l = 0, r = s.size() - 1;
    string t = s;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t;
}

int main()
{
    int cnt = 1;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    string t;
    while (ss >> temp)
    {
        if (cnt % 2 == 1)
        {
            cnt++;
            t += temp;
            t += ' ';
        }
        else
        {
            cnt++;
            t += ln(temp);
            t += ' ';
        }
    }
    t.pop_back();
    cout << t;
}