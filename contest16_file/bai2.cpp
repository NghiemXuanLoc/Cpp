#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>

using namespace std;

string email(string t)
{
    vector<string> v;
    for (char &x : t)
    {
        x = tolower(x);
    }
    stringstream ss(t);
    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    string res = v.back();
    for (int i = 0; i < v.size() - 1; i++)
    {
        res += v[i][0];
    }
    res += "@28land.edu.vn";
    return res;
}

int main()
{
    ifstream in;
    ofstream out;
    vector<string> v2;
    out.open("Email.txt");
    in.open("SinhVien.txt");
    if (in.is_open())
    {
        string ten;
        while (getline(in, ten))
        {
            string ns;
            getline(in, ns);
            out << email(ten) << endl;
            stringstream ss(ns);
            string temp;
            while (getline(ss, temp, '/'))
            {
                int res = stoi(temp);
                out << res;
            }
            out << endl;
        }
    }

    in.close();
    out.close();
}