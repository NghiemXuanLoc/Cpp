#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    int lon[m], be[m];
    if (s > 9 * m || (s == 0 && m >= 2))
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        int t = s;
        for (int i = 0; i < m; i++)
        {
            if (s >= 9)
            {
                lon[i] = 9;
                s -= 9;
            }
            else
            {
                lon[i] = s;
                s = 0;
            }
        }
        t--;
        for (int i = m - 1; i > 0; --i)
        {
            if (t >= 9)
            {
                be[i] = 9;
                t -= 9;
            }
            else
            {
                be[i] = t;
                t = 0;
            }
        }
        be[0] = t + 1;
        for (int x : be)
        {
            cout << x;
        }
        cout << endl;
        for (int x : lon)
        {
            cout << x;
        }
    }
}