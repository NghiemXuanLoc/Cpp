#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

class nhanvien
{
private:
    string mnv, ten, gt, ns, dc, khd, mst;

public:
    void nhap()
    {
        this->mnv = "00001";
        getline(cin, ten);
        getline(cin, gt);
        getline(cin, ns);
        getline(cin, dc);
        getline(cin, mst);
        getline(cin, khd);
    }

    void in(){
        cout << mnv << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << khd << endl; 
    }
};

int main(){
    nhanvien a;
    a.nhap();
    a.in();
}