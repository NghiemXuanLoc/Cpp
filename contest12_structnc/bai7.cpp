#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
using ll = long long;

struct toado
{
    double a, b;

    void nhap()
    {
        cin >> a >> b;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        toado z[2] = {0};
        z[0].nhap();
        z[1].nhap();
        double x =(z[1].a - z[0].a)*(z[1].a - z[0].a);
        double y =(z[1].b - z[0].b)*(z[1].b - z[0].b);
        double kq = sqrt(x + y);
        if (kq == 0)
        {
            cout << "0" << endl;
        }
        else
            cout << fixed << setprecision(4) << kq << endl;
        
    }
}