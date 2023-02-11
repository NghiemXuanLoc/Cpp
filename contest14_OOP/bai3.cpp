#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class sinhvien
{
private:
    string msv, ten, lop, ns;
    float gpa;

public:
    void nhap()
    {
        getline(cin, this->ten);
        getline(cin, this->lop);
        getline(cin, this->ns);
        cin >> this->gpa;
    }

    void in()
    {
        cout << this->msv << " " << this->ten << " " << this->lop << " " << this->ns << " " << fixed << setprecision(1) << this->gpa << endl;
    }

    void setmsv(string msv)
    {
        this->msv = msv;
    }

    string getns()
    {
        return this->ns;
    }

    void setns(string ns)
    {
        this->ns = ns;
    }
    float getgpa()
    {
        return this->gpa;
    }
    void setgpa(float gpa)
    {
        this->gpa = gpa;
    }
};

// chuan hoa ngay sinh

string chuanhoa(string s)
{
    string t = s;
    if (t[1] == '/')
    {
        t.insert(0, "0");
    }
    if (t[4] == '/')
    {
        t.insert(3, "0");
    }
    return t;
}

int main()
{
    sinhvien x;
    x.nhap();
    string t = x.getns();
    string ns = chuanhoa(t);
    x.setmsv("SV001");
    x.setns(ns);
    x.in();
}
