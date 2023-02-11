
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich =1ll * a * b;
    double thuong;
    cout << tong << endl
         << hieu << endl
         << tich << endl;
    if  (b == 0)
    {
        cout << "INVALID";
    }
    else
    {
        thuong = (double)a / b;
        cout << fixed << setprecision(4) << thuong << endl;
    }
}