


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

class hocsinh
{
private:
    string ten, ma;
    double t, tv, nn, vl, hh, sh, ls, dl, gdcd, cn;

public:
    hocsinh(int ma, string ten, double t, double tv, double nn, double vl, double hh, double sh, double ls, double dl, double gdcd, double cn)
    {
        if (ma == 10)
        {
            this->ma = "SV010";
        }
        else
        {
            this->ma = to_string(ma);
            while (this->ma.size() < 2)
            {
                this->ma = "0" + this->ma;
            }
            this->ma = "HS" + this->ma;
        }
        this->ten = ten;
        this->t = t;
        this->tv = tv;
        this->nn = nn;
        this->vl = vl;
        this->hh = hh;
        this->sh = sh;
        this->ls = ls;
        this->dl = dl;
        this->gdcd = gdcd;
        this->cn = cn;
    }
    double trungbinh()
    {
        double x = t + tv + nn + vl + hh + sh + ls + dl + gdcd + cn;
        double temp = x / (double)10;
        return temp;
    }
    string getma()
    {
        return this->ma;
    }
    void tostring()
    {
        double x = trungbinh();
        cout << ma << " " << ten << " " << fixed << setprecision(1) << x << " ";
        if (x >= 9)
        {
            cout << "XUAT SAC" << endl;
        }
        else if (x >= 8 && x <= 8.9)
        {
            cout << "GIOI" << endl;
        }
        else if (x >= 7 && x <= 7.9)
        {
            cout << "KHA" << endl;
        }
        else if (x >= 5 && x <= 6.9)
        {
            cout << "TB" << endl;
        }
        else
            cout << "YEU" << endl;
    }
};

bool cpm(hocsinh a, hocsinh b)
{
    if (a.trungbinh() != b.trungbinh())
    {
        return a.trungbinh() > b.trungbinh();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    vector<hocsinh> v;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)  cin.ignore();
        else  cin.ignore(2);
        string ten = "";
        double t, tv, nn, vl, hh, sh, dl, ls, gdcd, cn;
        getline(cin, ten);
        cin >> t;
        cin >> tv;
        cin >> nn;
        cin >> vl;
        cin >> hh;
        cin >> sh;
        cin >> dl;
        cin >> ls;
        cin >> gdcd;
        cin >> cn;
        hocsinh x(i + 1, ten, t, tv, nn, vl, hh, sh, ls, dl, gdcd, cn);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        x.tostring();
    }
}