#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sv
{
    string ten, ngaysinh, diachi;
    int tuoi;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ngaysinh);
        getline(cin, diachi);
        cin >> tuoi;
    }

    void in()
    {
        cout << ten << ' ' << ngaysinh << ' ' << diachi << ' ' << tuoi << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<sv> v;
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        sv x;
        x.nhap();
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        v[i].in();
    }
}