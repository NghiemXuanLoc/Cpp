#include <iostream>
#include <string>
#include <math.h>

using namespace std;
using ll = long long;

// ham kiem tra so nguyen to

bool snt(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return a > 1;
}

// ham kiem tra tat ca cac so co phai la so nguyen to khong

bool all(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '2' && a[i] != '3' && a[i] != '5' && a[i] != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    string temp = "";
    int ans = 0;
    for (char x : s)
    {
        ans += x - '0';
    }
    if (all(s) && snt(ans))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}