#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string a[10005];

// viet cmp de xx xaau

bool cmp(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
        return a < b;
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        a[cnt] = temp;
        cnt++;
    }

    sort(a, a + cnt, cmp);

    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
}