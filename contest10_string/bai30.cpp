#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

bool cmp(string a, string b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main()
{
    string s;
    string temp = "";
    cin >> s;
     s += 'a';
    vector<string> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            temp += s[i];
        }
        else
        {
            while (temp.size() > 1 && temp[0] == '0')
            {
                temp.erase(0, 1);
            }
            if (temp != "")
            {
                v.push_back(temp);
            }
            temp = "";
        }
    }
    sort(v.begin(), v.end(), cmp);

    for(string x : v){
        cout << x;
    }
}