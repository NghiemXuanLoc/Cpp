#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    if (s.find(t) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}