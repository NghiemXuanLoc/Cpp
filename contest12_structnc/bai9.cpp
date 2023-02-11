#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;

struct luong
{
    string mangach, ten;
    int cb;

    void nhap()
    {
        getline(cin, mangach);
        getline(cin, ten);
        cin >> cb;
    }
};

int main()
{
    luong x;
    x.nhap();
    string temp = x.mangach;
    string chucvu = "";
    chucvu += temp[0];
    chucvu += temp[1];
    string heso = "";
    heso += temp[2];
    heso += temp[3];
    ll thunhap = 1ll * stoi(heso) * x.cb;
    if (chucvu == "HT")
    {
        thunhap += 2000000;
    }
    else if (chucvu == "HP")
    {
        thunhap += 900000;
    }
    else
        thunhap += 500000;
    if (heso[0] == '0')
    {
        heso = heso[1];
        cout << x.mangach << " " << x.ten << " " << heso << " " << thunhap << endl;
    }
    else
        cout << x.mangach << " " << x.ten << " " << heso << " " << thunhap << endl;
}