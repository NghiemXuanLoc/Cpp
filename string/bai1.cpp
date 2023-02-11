#include<iostream>
#include<string>

using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore(1);
    string s;
    getline(cin ,s);
    cout << s;
}