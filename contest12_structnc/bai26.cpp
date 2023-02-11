#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

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

string b[3], c[3];
int cnt = 2;
void tach(string s)
{
    stringstream ss(s);
    string temp = "";
    while (getline(ss, temp, '/'))
    {
        b[cnt--] = temp;
    }
}

bool cmp(nv a, nv b)
{
    if (a.ns != b.ns)
    {
        return a.ns < b.ns;
    }
    else
        return a.mnv < b.mnv;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    nv a[n];

    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
        ch(a[i].ns);
        ch(a[i].khd);
        a[i].mnv = "";
        string t = to_string((i + 1));
        while (a[i].mnv.size() < 5 - t.size())
        {
            a[i].mnv += "0";
        }
        a[i].mnv += t;
    }

    // lat nguoc ngay sinh

    for (int i = 0; i < n; i++)
    {
        tach(a[i].ns);
        string t = "";
        for (int i = 0; i < 2; i++)
        {
            t += b[i];
            t += '/';
        }
        t += b[2];
        a[i].ns = t;
        cnt = 2;
    }
    sort(a, a + n, cmp);

    // lat nguoc ngay sinh

    for (int i = 0; i < n; i++)
    {
        tach(a[i].ns);
        string t = "";
        for (int i = 0; i < 2; i++)
        {
            t += b[i];
            t += '/';
        }
        t += b[2];
        a[i].ns = t;
        cnt = 2;
    }
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
}