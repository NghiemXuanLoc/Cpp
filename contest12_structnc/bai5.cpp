#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string ch2(string s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

struct nv
{
    string mnv, ten, gt, ns, diachi, mst, khd;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, gt);
        getline(cin, ns);
        getline(cin, diachi);
        getline(cin, mst);
        getline(cin, khd);
    }
    void in()
    {
        cout << mnv << " " << ten << gt << " " << ns << " " << diachi << " " << mst << " " << khd << endl;
    }
};

string ch(string s)
{
    stringstream ss(s);
    string temp = "", t = "";
    while (getline(ss, temp, '/'))
    {
        if (temp.size() < 2)
        {
            t += '0';
            t += temp;
            t += '/';
        }
        else if (temp.size() < 4)
        {
            t += temp;
            t += '/';
        }
        if (temp.size() == 4)
        {
            t += temp;
        }
    }
    return t;
}

string a[100];

int main()
{
    nv x;
    x.nhap();
    stringstream ss(x.ten);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        a[cnt++] = temp;
    }
    for (int i = 0; i < cnt; i++)
    {
        a[i] = ch2(a[i]);
    }
    // for (int i = 0; i < cnt; i++)
    // {
    //     cout << a[i] << " ";
    // }
    
    x.ns = ch(x.ns);
    x.khd = ch(x.khd);
    x.mnv = "00001";
    x.ten = "";
    for (int i = 0; i < cnt; i++)
    {
        x.ten += a[i];
        x.ten += ' ';
    }
    x.in();
}