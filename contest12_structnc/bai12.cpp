#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct sv
{
    string kv, ten;
    float toan, ly, hoa;

    void nhap()
    {
        getline(cin, kv);
        getline(cin, ten);
        cin >> toan >> ly >> hoa;
    }
};

int main()
{
    sv x;
    x.nhap();
    char ut = x.kv[2];
    float tong = x.toan + x.ly + x.hoa;
    if (ut == '1')
    {
        tong += 0.5;
    }
    else if (ut == '2')
    {
        tong += 1;
    }
    else
        tong += 2.5;

    cout << x.kv << " " << x.ten << " " << ut << " " << tong << " ";
    if (tong >= 24)
    {
        cout << "TRUNG TUYEN" << endl;
    }
    else
        cout << "TRUOT" << endl;
    
}