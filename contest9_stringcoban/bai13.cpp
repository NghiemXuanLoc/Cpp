#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == '!')
        {
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string temp;

    while (ss >> temp)
    {
        cout << temp << ' ';
    }
    while (s[s.size() - 1] == ' ')
    {
        s.pop_back();
    }
    cout << endl;
}