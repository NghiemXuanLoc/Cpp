#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <ctype.h>

using namespace std;

vector<string> v;

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
        chuanhoa();
        cout << ten << " " << ns << " " << dc;
    }
};

class student : public person
{
private:
    string msv, lop;
    double gpa;

public:
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
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ten;
        getline(cin, ten);
        string s;
        getline(cin, s);
        string ns = "", dc = "";
        int j = 0;
        while (!isalpha(s[j]))
        {
            ns += s[j];
            j++;
        }
        while (j < s.size())
        {
            dc += s[j];
            j++;
        }
        string lop;
        getline(cin, lop);
        double gpa;
        cin >> gpa;
        student st(i + 1, ten, ns, dc, lop, gpa);
        st.tostring();
    }
}