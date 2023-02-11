#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class sinhvien
{
private:
    string msv, ten, lop, email;

public:
    sinhvien(string msv, string ten, string lop, string email)
    {
        this->msv = msv;
        this->ten = ten;
        this->lop = lop;
        this->email = email;
    }
    void tostring()
    {
        cout << msv << " " << ten << " " << lop << " " << email << endl;
    }
    string getlop()
    {
        return this->lop;
    }
    string getma()
    {
        return msv;
    }
};

bool cpm(sinhvien a, sinhvien b)
{
    if (a.getlop() != b.getlop())
    {
        return a.getlop() < b.getlop();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<sinhvien> v;
    for (int i = 0; i < n; i++)
    {
        string msv, ten, lop, email;
        getline(cin, msv);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
        sinhvien x(msv, ten, lop, email);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        x.tostring();
    }
}