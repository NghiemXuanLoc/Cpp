#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

struct tamgiac
{
    double xa, xb, xc, ya, yb, yc;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tamgiac x;
        cin >> x.xa >> x.ya >> x.xb >> x.yb >> x.xc >> x.yc;
        double ab = sqrt((x.xb - x.xa) * (x.xb - x.xa) + (x.yb - x.ya) * (x.yb - x.ya));
        double ac = sqrt((x.xc - x.xa) * (x.xc - x.xa) + (x.yc - x.ya) * (x.yc - x.ya));
        double bc = sqrt((x.xc - x.xb) * (x.xc - x.xb) + (x.yc - x.yb) * (x.yc - x.yb));
        if (ab + ac <= bc)
        {
            cout << "INVALID";
        }
        else
        {
            double chuvi = (ab + ac + bc);
            double p = chuvi / 2;
            double dientich = sqrt(p * (p - bc) * (p - ab) * (p - ac));

            cout << fixed << setprecision(3) << chuvi << " " << fixed << setprecision(3) << dientich << endl;
        }
    }
}
