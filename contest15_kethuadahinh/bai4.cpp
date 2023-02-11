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
    string getdc()
    {
        return this->dc;
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
    string mgv, khoa, lpt;
    int luong;

public:
    giaovien() {}
    giaovien(string mgv, string ten, string ns, string dc, string khoa, int luong, string lpt) : person(ten, ns, dc)
    {
        this->mgv = mgv;
        this->khoa = khoa;
        this->luong = luong;
        this->lpt = lpt;
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
    cin.ignore();
    string dcn = "";
    vector<sinhvien> v1;
    vector<giaovien> v2;
    for (int i = 0; i < n; i++)
    {
        string ma, ten, ns, dc, khoa, lop, lpt;
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
            cin.ignore();
            getline(cin, lpt);
            giaovien gv(ma, ten, ns, dc, khoa, luong, lpt);
            v2.push_back(gv);
            v2.back().chuanhoa();
        }
        else
        {
            getline(cin, lop);
            cin >> gpa;
            cin.ignore();
            sinhvien sv(ma, ten, ns, dc, lop, gpa);
            v1.push_back(sv);
            v1.back().chuanhoa();
        }
    }
    getline(cin, dcn);
    // cout << dcn << endl;
    cout << "DANH SACH GIAO VIEN CO DIA CHI TAI ";
    cout << dcn << " :" << endl;
    for (auto x : v2)
    {
        if (x.getdc() == dcn)
        {
            x.tostring();
        }
    }
    cout << "DANH SACH SINH VIEN CO DIA CHI TAI ";
    cout << dcn << " :" << endl;
    for (auto x : v1)
    {
        if (x.getdc() == dcn)
        {
            x.tostring();
        }
    }
}