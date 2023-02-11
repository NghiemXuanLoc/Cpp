#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct nv
{
    string mnv, ten, gt, ns, dc, mst, khd;
    void nhap()
    {
        getline(cin, ten);
        getline(cin, gt);
        getline(cin, ns);
        getline(cin, dc);
        getline(cin, mst);
        getline(cin, khd);
    }

    void in()
    {
        cout << mnv << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << khd << endl;
    }
};

void ch(string &s)
{
    if (s[1] == '/')
    {
        s.insert(0, "0");
    }
    if (s[4] == '/')
    {
        s.insert(3, "0");
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int cnt = 1;
    while (n--)
    {
        string t = to_string(cnt);
        nv x;
        x.nhap();
        ch(x.ns);
        ch(x.khd);
        x.mnv = "";
        while (x.mnv.size() < 5 - t.size())
        {
            x.mnv += "0";
        }
        x.mnv += t;
        cnt++;
        x.in();
    }
}