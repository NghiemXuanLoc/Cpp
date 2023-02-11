#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct sinhvien
{
    string ten, ns, lop;
    float gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ns);
        cin >> gpa;
    }
};

string ch(string s)
{
    stringstream ss(s);
    string temp = "", t = "";
    while (getline(ss, temp, '/'))
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
        if (temp.size() == 4)
        {
            t += temp;
        }
    }

    return t;
}

int main()
{
    sinhvien x;
    x.nhap();
    string t = "SV001", t2 = ch(x.ns);
    string t3 = to_string(x.gpa);
    int cnt = 3;
    while (t3.size() > 3)
    {
        if (t3[3] == '0')
        {
            t3.erase(3, 1);
        }
        t3.erase(cnt);
    }
    cout << t << " " << x.ten << " " << x.lop << " " << t2 << " " << t3 << endl;
}
