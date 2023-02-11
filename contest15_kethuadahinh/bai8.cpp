#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class phuongtien
{
private:
    string ma, ten, hang, mau;

public:
    phuongtien()
    {
        ma = "";
        ten = "";
        hang = "";
        mau = "";
    }

    phuongtien(string ma, string ten, string hang, string mau)
    {
        this->ma = ma;
        this->ten = ten;
        this->hang = hang;
        this->mau = mau;
    }
    void tostring()
    {
        cout << ma << " " << ten << " " << hang << " " << mau;
    }
    string gethang()
    {
        return this->hang;
    }
    string getma()
    {
        return this->ma;
    }
};

class xemay : public phuongtien
{
private:
    int tdmax, gia;

public:
    xemay() {}
    xemay(string ma, string ten, string hang, string mau, int tdmax, int gia) : phuongtien(ma, ten, hang, mau)
    {
        this->tdmax = tdmax;
        this->gia = gia;
    }
    void tostring()
    {
        phuongtien::tostring();
        cout << " " << tdmax << " " << gia << endl;
    }
    int getgia()
    {
        return this->gia;
    }
};

class oto : public phuongtien
{
private:
    int maluc;
    int gia;

public:
    oto() {}
    oto(string ma, string ten, string hang, string mau, int maluc, int gia) : phuongtien(ma, ten, hang, mau)
    {
        this->maluc = maluc;
        this->gia = gia;
    }

    void tostring()
    {
        phuongtien::tostring();
        cout << " " << maluc << " " << gia << endl;
    }
    int getgia()
    {
        return this->gia;
    }
};

bool cpm2(oto a, oto b)
{
    if (a.getgia() != b.getgia())
    {
        return a.getgia() > b.getgia();
    }
    else
        return a.getma() < b.getma();
}

bool cpm1(xemay a, xemay b)
{
    if (a.getgia() != b.getgia())
    {
        return a.getgia() > b.getgia();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    vector<xemay> v1;
    vector<oto> v2;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ma, ten, hang, mau;
        int maluc, gia, tdmax;
        getline(cin, ma);
        getline(cin, ten);
        getline(cin, hang);
        getline(cin, mau);
        string temp = "";
        temp += ma[0];
        temp += ma[1];
        if (temp == "XM")
        {
            cin >> tdmax;
            cin >> gia;
            xemay xm(ma, ten, hang, mau, tdmax, gia);
            v1.push_back(xm);
        }
        else
        {
            cin >> maluc;
            cin >> gia;
            oto ot(ma, ten, hang, mau, maluc, gia);
            v2.push_back(ot);
        }
    }
    sort(v1.begin(), v1.end(), cpm1);
    sort(v2.begin(), v2.end(), cpm2);

    cout << "DANH SACH OTO :" << endl;
    for (auto x : v2)
    {
        x.tostring();
    }
    cout << "DANH SACH XE MAY :" << endl;
    for (auto x : v1)
    {
        x.tostring();
    }
}