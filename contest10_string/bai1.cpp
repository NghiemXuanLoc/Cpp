#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cc = 0, cs = 0, db = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            cs++;
        }
        else if (isalpha(s[i]))
        {
            cc++;
        }
        else
            db++;
    }
    cout << cc << " " << cs << " " << db << endl;
}