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
    string ten, ns, dc;

public:
    person()
    {
        ten = "";
        dc = "";
        ns = "";
    }
    person(string ten, string ns, string dc)
    {
        this->ten = ten;
        this->ns = ns;
        this->dc = dc;
    }
    void chuanhoa()
    {
        string res = "";
        stringstream ss(ten);
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
        cout << ten << " " << ns << " " << dc;
    }
};

class sinhvien : public person
{
private:
    string msv, lop;
    double gpa;

public:
    sinhvien() {}
    sinhvien(string msv, string ten, string ns, string dc, string lop, double gpa) : person(ten, ns, dc)
    {
        this->msv = msv;
        this->lop = lop;
        this->gpa = gpa;
    }
    void tostring()
    {
        cout << msv << " ";
        person::tostring();
        cout << " " << lop << " " << fixed << setprecision(2) << gpa << endl;
    }
};

class giaovien : public person
{
private:
    string mgv, khoa;
    int luong;

public:
    giaovien() {}
    giaovien(string mgv, string ten, string ns, string dc, string khoa, int luong) : person(ten, ns, dc)
    {
        this->mgv = mgv;
        this->khoa = khoa;
        this->luong = luong;
    }
    void tostring()
    {
        cout << mgv << " ";
        person::tostring();
        cout << " " << khoa << " " << luong << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<sinhvien> v1;
    vector<giaovien> v2;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ma = "", ten = "", ns = "", dc = "", khoa = "", lop = "";
        double gpa;
        int luong;
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
            v2.push_back(gv);
            v2.back().chuanhoa();
        }
        else
        {
            getline(cin, lop);
            cin >> gpa;
            sinhvien sv(ma, ten, ns, dc, lop, gpa);
            v1.push_back(sv);
            v1.back().chuanhoa();
        }
    }
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