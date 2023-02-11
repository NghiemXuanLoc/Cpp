#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct mh
{
    string mmh, tmh, dvt;

    int gm, gb, ln;

    void nhap()
    {
        getline(cin, tmh);
        getline(cin, dvt);
        cin >> gm >> gb;
    }
};

bool cmp(mh a, mh b)
{
    if (a.ln != b.ln)
    {
        return a.ln > b.ln;
    }
    else
        return a.mmh < b.mmh;
}

int main()
{
    int t;
    cin >> t;
    mh a[t];
    for (int i = 0; i < t; i++)
    {
        cin.ignore();
        a[i].nhap();
        a[i].ln = a[i].gb - a[i].gm;
        a[i].mmh = "MH";
        string t = to_string(i + 1);
        while (a[i].mmh.size() < 6 - t.size())
        {
            a[i].mmh += "0";
        }
        a[i].mmh += t;
    }

    sort(a, a + t, cmp);

    for (int i = 0; i < t; i++)
    {
        cout << a[i].mmh << " " << a[i].tmh << " " << a[i].dvt << " " << a[i].gm << " " << a[i].gb << " " << a[i].ln << endl;
    }
}