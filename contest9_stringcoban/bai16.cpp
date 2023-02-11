#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



int main(){
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    cout << t << endl;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;
}