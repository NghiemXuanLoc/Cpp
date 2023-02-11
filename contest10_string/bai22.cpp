#include<iostream>
#include<sstream>
#include<string>
#include<map>
#include<set>

using namespace std;

string lower(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    map<string, int> mp;
    

    stringstream ss(s);
    stringstream tt(t);
    string temp, temp2;
    while (ss >> temp)
    {
        temp = lower(temp);
        mp[temp] = 1;
    }
    while (tt >> temp)
    {
        temp = lower(temp);
        mp[temp] = 2;
    }
    for(auto x : mp){
        if (x.second == 1)
        {
            cout << x.first << " ";
        }
    }
}