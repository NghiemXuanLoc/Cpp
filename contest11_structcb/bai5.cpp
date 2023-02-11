#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
using ll = long long;

struct sinhvien
{
    string ten, ngaysinh, diachi;
    double gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ngaysinh);
        getline(cin, diachi);
        cin >> gpa;
    }

    void in()
    {
        cout << ten << " " << ngaysinh << " " << diachi << " " << fixed << setprecision(2) << gpa << endl;
    }
};

bool cmp(sinhvien a, sinhvien b)
{
    return a.ten < b.ten;
}

int main()
{
    int n;
    cin >> n;
    sinhvien a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
    }
    stable_sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
}