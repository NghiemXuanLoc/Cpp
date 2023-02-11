#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

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
    vector<sv> v;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        sv x;
        x.nhap();
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].gpa < 1.00)
        {
            v.erase(v.begin() + i);
            i--;
        }
        else
            v[i].in();
    }
}