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
    string getma()
    {
        return this->msv;
    }
    void tostring()
    {
        cout << msv << " " << ten << " " << lop << " " << email << endl;
    }
};

bool cpm(sinhvien a, sinhvien b)
{
    return a.getma() < b.getma();
}

int main()
{
    vector<sinhvien> v;
    string temp;
    string msv, ten, lop, email;
    string res = "";
    int j = 1;
    while (getline(cin, temp))
    {
        if (j == 1)
        {
            msv = temp;
            j++;
        }
        else if (j == 2)
        {
            ten = temp;
            j++;
        }
        else if (j == 3)
        {
            lop = temp;
            j++;
        }
        else
        {
                email = temp;
                j++;
        }
        if (j >= 5)
        {
            sinhvien x(msv, ten, lop, email);
            v.push_back(x);
            j = 1;
        }
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        x.tostring();
    }
}
