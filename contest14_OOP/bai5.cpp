#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctype.h>

using namespace std;

string chten[10];
int cnt = 0;

class nhanvien
{
private:
    string mnv, ten, gt, ns, dc, mst, khd;

public:
    void nhap()
    {
        mnv = "00001";
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
    string ch1(string c)
    {
        string a = c;
        if (a[1] == '/')
        {
            a = '0' + a;
        }
        if (a[4] == '/')
        {
            a.insert(3, "0");
        }
        return a;
    }
    void getten()
    {
        stringstream ss(this->ten);
        string temp;
        while (ss >> temp)
        {
            chten[cnt++] = temp;
        }
    }
    string ch2(string chten[], int cnt)
    {
        string s = "";
        for (int i = 0; i < cnt; i++)
        {
            for (int j = 0; j < chten[i].size(); j++)
            {
                chten[i][j] = tolower(chten[i][j]);
            }
        }
        for (int i = 0; i < cnt; i++)
        {
            for (int j = 0; j < chten[i].size(); j++)
            {
                chten[i][0] = toupper(chten[i][0]);
            }
            s += chten[i];
            if (i < cnt - 1)
            {
                s += ' ';
            }
        }
        return s;
    }

    void thaydoi()
    {
        string t = "";
        t = ch2(chten, cnt);
        this->ns = ch1(this->ns);
        this->khd = ch1(this->khd);
        this->ten = t;
    }
};

string ch2(string chten[], int cnt)
{
    string s = "";
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < chten[i].size(); j++)
        {
            chten[i][j] = tolower(chten[i][j]);
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < chten[i].size(); j++)
        {
            chten[i][0] = toupper(chten[i][0]);
        }
        s += chten[i];
        if (i < cnt - 1)
        {
            s += ' ';
        }
    }
    return s;
}

int main()
{
    nhanvien x;
    x.nhap();
    x.getten();
    x.thaydoi();
    x.in();
    // cout << ch2(chten, cnt);
}