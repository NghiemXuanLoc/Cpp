#include <iostream>
// #include <struct.h>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

struct SV
{
    string hoten, ngaysinh, diachi;
    int toan, ly, hoa;
    void nhap()
    {
        getline(cin, hoten);
        getline(cin, ngaysinh);
        getline(cin, diachi);
        cin >> toan >> ly >> hoa;
    }
    void in()
    {
        cout << hoten << ' ' << ngaysinh << ' ' << diachi << ' ' << toan + ly + hoa << ' ';
        if (toan + ly + hoa >= 24)
        {
            cout << "DO" << endl;
        }
        else
            cout << "TRUOT" << endl;
    }
    int tongdiem()
    {
        return toan + ly + hoa;
    }
};

int main()
{
    int n;
    cin >> n;
    SV a[n];
    int max_val = 0;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
        max_val = max(a[i].tongdiem(), max_val);
    }

    cout << "DANH SACH THU KHOA :" << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].tongdiem() == max_val)
        {
            cout << a[i].hoten << ' ' << a[i].ngaysinh << ' ' << a[i].diachi << ' ' << a[i].tongdiem() << endl;
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].in();
    }
}

