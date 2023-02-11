#include <iostream>
#include <string>
#include<map>

using namespace std;

int dem[256];

int main()
{
    string s;
    cin >> s;
    map<string, int> ab;
    

    int ok = 1;
    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
        if (dem[s[i]] > 1)
        {
            cout << s[i] << endl;
            ok = 0;
            break;
        }
        
    }
    if (ok)
    {
        cout << "NONE" << endl;
    }
    
}