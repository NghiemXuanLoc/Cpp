#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string temp, t;
    while (getline(ss, temp, '/'))
    {
        if (temp.size() < 2)
        {
            t += '0';
            t += temp;
            t += '/';
        }
        else
        {
            t += temp;
            if (temp.size() < 4)
            {
                t += '/';
            }
        }
    }
    cout << t << endl;
}