#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

string a[100005], b[100005];

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
    string temp, t;
    int cnt = 0;
    while (ss >> temp)
    {

        a[cnt] = temp;
        b[cnt] = temp;
        cnt++;
    }
    sort(b, b + cnt);
    for (int i = 0; i < cnt; i++)
    {
        cout << b[i] << ' ';
    }

    cout << endl;

    sort(a, a + cnt, cmp);

    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}