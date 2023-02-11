#include <iostream>

using namespace std;
using ll = long long;

struct hcn
{
    int a, b;
    string mau;
};

string ch(string s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main()
{
    hcn x;
    cin >> x.a >> x.b;
    cin.ignore();
    cin >> x.mau;
    int chuvi = x.a * 2 + x.b * 2;
    ll dientich = 1ll * x.a * x.b;
    if (x.a > 0 && x.b > 0)
    {
        cout << chuvi << " " << dientich << " " << ch(x.mau) << endl;
    }
    else
        cout << "INVALID";
}