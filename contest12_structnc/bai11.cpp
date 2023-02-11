#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

struct luong
{
    string mnv, ten, cv;
    int lcb, nc;

    void nhap()
    {
        getline(cin, ten);
        cin >> lcb;
        cin >> nc;
        cin.ignore();
        getline(cin, cv);
    }
};

int main()
{
    luong x;
    x.nhap();
    ll thunhap;
    thunhap = x.lcb * x.nc;
    double thuong = 0;
    if (x.nc >= 25)
    {
        thuong = (double)thunhap * 20 / 100;
    }
    else if (x.nc >= 22 && x.nc < 25)
    {
        thuong = (double)thunhap * 0.1;
    }

    int pc = 0;
    if (x.cv == "GD")
    {
        pc = 250000;
    }
    else if (x.cv == "PGD")
    {
        pc = 200000;
    }
    else if (x.cv == "TP")
    {
        pc = 180000;
    }
    else
    {
        pc = 150000;
    }
    
    thunhap = thunhap + thuong + pc;
    cout << "NV01"
         << " " << x.ten << " " << x.lcb * x.nc << " " << thuong << " " << pc << " " << thunhap << endl;  

        //  cout << ((x.lcb*x.nc) + (thuong + pc ))<< endl; 
}