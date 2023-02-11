#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

class giangvien
{
private:
    string mgv, ten, bomon;

public:
    giangvien(int mgv, string ten, string bomon)
    {
        this->mgv = to_string(mgv);
        while (this->mgv.size() < 2)
        {
            this->mgv = "0" + this->mgv;
        }
        this->mgv = "GV" + this->mgv;
        this->ten = ten;
        this->bomon = bomon;
    }
    string sortname()
    {
        vector<string> v;
        stringstream ss(ten);
        string temp;
        while (ss >> temp)
        {
            v.push_back(temp);
        }
        string res = v.back();
        return res;
    }
    string getma()
    {
        return this->mgv;
    }
    void tostring()
    {
        cout << mgv << " " << ten << " " << bomon << endl;
    }
};

bool cpm(giangvien a, giangvien b)
{
    if (a.sortname() != b.sortname())
    {
        return a.sortname() < b.sortname();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<giangvien> v;
    for (int i = 0; i < n; i++)
    {
        string ten, bomon;
        getline(cin, ten);
        getline(cin, bomon);
        stringstream ss(bomon);
        string temp;
        string bm = "";
        while (ss >> temp)
        {
            bm += toupper(temp[0]);
        }
        giangvien x(i + 1, ten, bm);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        x.tostring();
    }
}