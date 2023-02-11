#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <map>
#include <vector>

using namespace std;

string mk[1000];

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        vector<string> v;
        string abc;
        while (ss >> temp)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                temp[i] = tolower(temp[i]);
            }

            v.push_back(temp);
        }

        abc += v[v.size() - 2];
        for (int i = 0; i < v.size() - 2; i++)
        {
            abc += v[i][0];
        }
        if (mp[abc] == 0)
        {
            cout << abc << "@xyz.edu.vn" << endl;
        }
        else
            cout << abc << mp[abc] + 1 << "@xyz.edu.vn" << endl;
        mp[abc]++;

        string l = v[v.size() - 1];
        stringstream ll(l);
        string tem;
        int cnt = 0;
        while (getline(ll, tem, '/'))
        {
            if ((tem.size() <= 2) && (tem[0] == '0'))
            {
                tem.erase(0, 1);
            }
            cout << tem;
        }
        cout << endl;
    }
}