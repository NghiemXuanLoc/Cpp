#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    
}