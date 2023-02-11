#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
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
    void chuanhoa()
    {
        stringstream ss(this->ten);
        string temp;
        string res = "";
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
    }
    string getdulieu()
    {
        return lop.substr(0, 4);
    }

    void tostring()
    {
        cout << msv << " " << ten << " " << lop << " " << email << endl;
    }
};

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
        x.chuanhoa();
        v.push_back(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string temp = "";
        cin >> temp;
        if (temp == "CNTT")
        {
            cout << "DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN :" << endl;
            for (auto x : v)
            {
                if (x.getdulieu() == temp)
                {
                    x.tostring();
                }
            }
        }
        if (temp == "DTVT")
        {
            cout << "DANH SACH SINH VIEN NGANH DIEN TU VIEN THONG :" << endl;
            for (auto x : v)
            {
                if (x.getdulieu() == temp)
                {
                    x.tostring();
                }
            }
        }
        if (temp == "KT")
        {
            cout << "DANH SACH SINH VIEN NGANH KE TOAN :" << endl;
            for (auto x : v)
            {
                string res = x.getdulieu().substr(0, 2);
                if (res == temp)
                {
                    x.tostring();
                }
            }
        }
        if (temp == "MKT")
        {
            cout << "DANH SACH SINH VIEN NGANH MARKETING :" << endl;
            for (auto x : v)
            {
                 string res = x.getdulieu().substr(0, 3);
                if (res == temp)
                {
                    x.tostring();
                }
            }
        }
    }
}