#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

class person
{
private:
    string ten, ns, dc, ma;

public:
    person()
    {
        ten = "";
        ns = "";
        dc = "";
        ma = "";
    }
    person(string ma, string ten, string ns, string dc)
    {
        this->ma = ma;
        this->ten = ten;
        this->ns = ns;
        this->dc = dc;
    }
    void chuanhoa()
    {
        string res = "";
        stringstream ss(this->ten);
        string temp;
        while (ss >> temp)
        {
            res += toupper(temp[0]);
            for (int i = 1; i < temp.size(); i++)
            {
                res += tolower(temp[i]);
            }
            res += " ";
        }
        res.pop_back();
        this->ten = res;
        if (this->ns[1] == '/')
        {
            this->ns = "0" + this->ns;
        }
        if (this->ns[4] == '/')
        {
            this->ns.insert(3, "0");
        }
    }
    void tostring()
    {
        cout << ma << " " << ten << " " << ns << " " << dc;
    }
    string getma()
    {
        return this->ma;
    }
};

class sinhvien : public person
{
private:
    string lop;
    double gpa;

public:
    sinhvien() {}
    sinhvien(string ma, string ten, string ns, string dc, string lop, double gpa) : person(ma, ten, ns, dc)
    {
        this->lop = lop;
        this->gpa = gpa;
    }
    void tostring()
    {
        person::tostring();
        cout << " " << lop << " " << fixed << setprecision(2) << gpa << endl;
    }
    double getgpa()
    {
        return this->gpa;
    }
};

class giaovien : public person
{
private:
    string khoa;
    int luong;

public:
    giaovien() {}
    giaovien(string ma, string ten, string ns, string dc, string khoa, int luong) : person(ma, ten, ns, dc)
    {
        this->khoa = khoa;
        this->luong = luong;
    }
    void tostring()
    {
        person::tostring();
        cout << " " << khoa << " " << luong << endl;
    }
    int getluong()
    {
        return this->luong;
    }
};

bool cpm1(giaovien a, giaovien b)
{
    if (a.getluong() != b.getluong())
    {
        return a.getluong() > b.getluong();
    }
    else
    {
        return a.getma() < b.getma();
    }
}

bool cpm2(sinhvien a, sinhvien b)
{
    if (a.getgpa() != b.getgpa())
    {
        return a.getgpa() > b.getgpa();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    vector<sinhvien> v1;
    vector<giaovien> v2;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ma, ten, ns, dc, khoa, lop;
        int luong;
        double gpa;
        getline(cin, ma);
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        string temp = "";
        temp += ma[0];
        temp += ma[1];
        if (temp == "GV")
        {
            getline(cin, khoa);
            cin >> luong;
            giaovien gv(ma, ten, ns, dc, khoa, luong);
            gv.chuanhoa();
            v2.push_back(gv);
        }
        else
        {
            getline(cin, lop);
            cin >> gpa;
            sinhvien sv(ma, ten, ns, dc, lop, gpa);
            sv.chuanhoa();
            v1.push_back(sv);
        }
    }
    sort(v1.begin(), v1.end(), cpm2);
    sort(v2.begin(), v2.end(), cpm1);
    cout << "DANH SACH GIAO VIEN :" << endl;
    for (auto x : v2)
    {
        x.tostring();
    }
    cout << "DANH SACH SINH VIEN :" << endl;
    for (auto x : v1)
    {
        x.tostring();
    }
}