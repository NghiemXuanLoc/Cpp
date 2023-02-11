#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct sinhvien
{
    string ten, ns;
    float mon1, mon2, mon3, tong;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ns);
        cin >> mon1 >> mon2 >> mon3;
    }
};

// chuan hoa ngay sinh

string ch(string s)
{
    stringstream ss(s);
    string temp = "", t = "";
    while (ss >> temp)
    {
        if (temp.size() < 2)
        {
            t += '0';
            t += temp;
            t += '/';
        }
        else if (temp.size() < 4)
        {
            t += temp;
            t += '/';
        }
        else
            t += temp;
    }
    return t;
}

int main()
{
    sinhvien x;
    x.nhap();
    string t = ch(x.ns);
    float tong = x.mon1 + x.mon2 + x.mon3;
    cout << x.ten << " " << t << " " << fixed << setprecision(1) << tong << endl;
}