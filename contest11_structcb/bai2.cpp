#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;

struct sophuc
{
    int thuc, ao;

    void nhap()
    {
        cin >> thuc >> ao;
    }

    void in()
    {
        cout << thuc << " " << ao << endl;
    }
};

sophuc tong(sophuc a, sophuc b)
{
    sophuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    return c;
}

sophuc hieu(sophuc a, sophuc b)
{
    sophuc c;
    c.thuc = a.thuc - b.thuc;
    c.ao = a.ao - b.ao;
    return c;
}

sophuc tich(sophuc a, sophuc b)
{
    sophuc c;
    c.thuc = (a.thuc * b.thuc) - (b.ao * a.ao);
    c.ao = (a.thuc * b.ao) + (a.ao * b.thuc);
    return c;
}

int main()
{
    sophuc a, b;
    a.nhap();
    b.nhap();
    tong(a, b).in();
    hieu(a, b).in();
    tich(a, b).in();
}