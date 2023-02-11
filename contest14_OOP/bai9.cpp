#include <iostream>
#include <string>

using namespace std;

class gv
{
private:
    string mn, ten;
    int lcb;

public:
    gv(string mn, string ten, int lcb)
    {
        this->mn = mn;
        this->ten = ten;
        this->lcb = lcb;
    }
    string getcv()
    {
        string cv = "";
        for (int i = 0; i < mn.size() - 2; i++)
        {
            cv += mn[i];
        }
        return cv;
    }
    int getbl()
    {
        string temp = "";
        for (int i = 2; i < mn.size(); i++)
        {
            temp += mn[i];
        }
        int bl = stoi(temp);
        return bl;
    }

    int thunhap()
    {
        int bl = getbl();
        string cv = getcv();
        int tn = lcb * bl;
        if (cv == "HT")
        {
            tn += 2000000;
        }
        else if (cv == "HP")
        {
            tn += 900000;
        }
        else
            tn += 500000;
        return tn;
    }
    void in()
    {
        int bl = getbl();
        int tn = thunhap();
        cout << mn << " " << ten << " " << bl << " " << tn << endl;
    }
};

int main()
{
    string mn, ten;
    int lcb;
    cin >> mn;
    cin.ignore();
    getline(cin, ten);
    cin >> lcb;
    gv x(mn, ten, lcb);
    x.in();
}