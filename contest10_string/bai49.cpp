#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "111";
    while (s.find(t) != string::npos)
    {
        s.erase(s.find(t), 3);
    }
    if (s.size())
    {
        cout << s << endl;
    }
    else
        cout << "EMPTY" << endl;
}