#include <iostream>
#include <string>
#include <iomanip>
#include<algorithm>

using namespace std;

struct sv
{
    string ten, ns, dc;
    double gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> gpa;
    }

    void in()
    {
        cout << ten << " " << ns << " " << dc << " " << fixed << setprecision(2) << gpa << endl;
    }
};

bool cmp(sv a, sv b)
{
    if (a.dc != b.dc)
    {
        return a.dc < b.dc;
    }
    else
        return a.gpa > b.gpa;
}

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
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
}