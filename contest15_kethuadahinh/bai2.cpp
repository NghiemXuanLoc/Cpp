#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <ctype.h>
#include<algorithm>

using namespace std;

class person
{
private:
    string ten, ns, dc;

public:
    person()
    {
        ten = "";
        ns = "";
        dc = "";
    }
    person(string ten, string ns, string dc)
    {
        this->ten = ten;
        this->ns = ns;
        this->dc = dc;
    }
    void chuanhoa()
    {
        string res = "";
        stringstream ss(ten);
        string temp;
        while (ss >> temp)
        {
            res += toupper(temp[0]);
            for (int i = 1; i < temp.size(); i++)
            {
                res += tolower(temp[i]);
            }
            res += " ";
        }
        res.pop_back();
        this->ten = res;
        if (this->ns[1] == '/')
        {
            this->ns = "0" + this->ns;
        }
        if (this->ns[4] == '/')
        {
            this->ns.insert(3, "0");
        }
    }
    void tostring()
    {
        cout << ten << " " << ns << " " << dc;
    }
    string getsortname()
    {
        vector<string> v;
        stringstream ss(this->ten);
        string temp;
        while (ss >> temp)
        {
            v.push_back(temp);
        }
        string res = v.back();
        for (int i = 0; i < v.size() - 1; i++)
        {
            res += v[i];
        }
        // this->ten = res;
        return res;
    }
};

class student : public person
{
private:
    string msv, lop;
    double gpa;

public:
    student() {}
    student(int msv, string ten, string ns, string dc, string lop, double gpa) : person(ten, ns, dc)
    {
        this->msv = to_string(msv);
        while (this->msv.size() < 4)
        {
            this->msv = "0" + this->msv;
        }
        this->lop = lop;
        this->gpa = gpa;
    }
    void tostring()
    {
        cout << msv << " ";
        person::tostring();
        cout << " " << lop << " " << fixed << setprecision(2) << this->gpa << endl;
    }
    string getma()
    {
        return this->msv;
    }
};
bool cpm(student a, student b)
{
    if (a.getsortname() != b.getsortname())
    {
        return a.getsortname() < b.getsortname();
    }
    else
        return a.getma() < b.getma();
}

int main()
{
    int n;
    cin >> n;
    student a[n];
    vector<student> v;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ten;
        getline(cin, ten);
        string ns;
        getline(cin, ns);
        string dc;
        getline(cin, dc);
        string lop;
        getline(cin, lop);
        double gpa;
        cin >> gpa;
        student st(i + 1, ten, ns, dc, lop, gpa);
        a[i] = st;
        a[i].chuanhoa();
        v.push_back(st);
        v[i].chuanhoa();
    }
    sort(v.begin(), v.end(),cpm);
    for(auto x : v){
        x.tostring();
    }
}