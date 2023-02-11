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
    int n;
    cin >> n;
    sinhvien a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        a[i].nhap();
    }
    for (int i = 0; i < n; i++)
    {
        string t = a[i].ns;
        a[i].ns = ch(t);
    }

    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (cnt < 10)
        {
            cout << "SV00" << cnt << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
            cnt++;
        }
        else if (cnt < 100)
        {
            cout << "SV0" << cnt << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
            cnt++;
        }
        else
        {
            cout << "SV" << cnt << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
            cnt++;
        }
    }
}
