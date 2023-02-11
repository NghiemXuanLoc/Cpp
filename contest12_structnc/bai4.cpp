#include <iostream>
#include <string>

using namespace std;

struct nv
{
    string mnv, ten, gt, ns, diachi, mst, khd;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, gt);
        getline(cin, ns);
        getline(cin, diachi);
        getline(cin, mst);
        getline(cin, khd);
    }
};

int main()
{
    nv x;
    x.nhap();
    x.mnv = "00001";
    cout << x.mnv << " " << x.ten << " " << x.gt << " " << x.ns << " " << x.diachi << " " << x.mst << " " << x.khd << endl;
}