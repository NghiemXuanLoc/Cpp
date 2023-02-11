#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    string temp = "";
    cin >> s;
    int res;
    if (s.size() > 1)
    {
        temp += s[s.size() - 2];
        temp += s[s.size() - 1];
        res = stoi(temp);
    }else {
        temp += s[0];
        res = stoi(temp);
    }
    
    if (res % 4 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}