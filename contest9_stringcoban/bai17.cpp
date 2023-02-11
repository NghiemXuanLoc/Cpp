#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string a[10005];
string b[10005];

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
        b[cnt] = temp;
        cnt++;
    }
    sort(a, a + cnt);
    sort(b, b + cnt, greater<string>());
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}