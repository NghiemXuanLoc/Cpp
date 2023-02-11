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
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        vector<string> v;
        while (ss >> temp)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                temp[i] = tolower(temp[i]);
            }

            v.push_back(temp);
        }

        cout << v[v.size() - 2];
        for (int i = 0; i < v.size() - 2; i++)
        {
            cout << v[i][0];
        }
        cout << "@xyz.edu.vn" << endl;
        string l = v[v.size() - 1];
        stringstream ll(l);
        string tem;
        int cnt = 0;
        while (getline(ll, tem, '/'))
        {
           if ((tem.size() <= 2) && ( tem[0] == '0'))
           {
                tem.erase(0, 1);
           }
           cout << tem;
        }
        cout << endl;
    }
}