#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct sv
{
    string ten, ns, dc;
    double gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, ns);
        getline(cin, dc);
        cin >> gpa;
    }

    void in()
    {
        cout << ten << " " << ns << " " << dc << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
    }
    string t = "Nam Dinh";
    for (int i = 0; i < n; i++)
    {
        if ((a[i].gpa >= 2.5) && a[i].dc == t)
        {
            a[i].in();
        }
    }
}