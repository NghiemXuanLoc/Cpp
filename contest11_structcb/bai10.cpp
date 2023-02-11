#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

struct sv
{
    string ten, ns, dc;
    float gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> gpa;
    }

    void in()
    {
        cout << ten << " " << ns << ' ' << dc << ' ' << fixed << setprecision(2) << gpa << endl;
    }

    string nss()
    {
        return ns;
    }
};

int main()
{
    int n;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
    }

    for (int i = 0; i < n; i++)
    {
        string month[3];
        int cnt = 0;
        string s = a[i].ns;
        stringstream ss(s);
        string temp = "";
        while (getline(ss, temp, '/'))
        {
            month[cnt++] = temp;
        }
        if (month[1] == "4")
        {
            a[i].in();
        }
    }
}