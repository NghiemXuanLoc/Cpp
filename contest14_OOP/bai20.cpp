#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Time
{
private:
    int gio, phut, giay;

public:
    Time();
    Time(int gio, int phut, int giay)
    {
        this->gio = gio;
        this->phut = phut;
        this->giay = giay;
    }

    // bool operator<(Time b)
    // {
    //     int s1 = gio * 3600 + phut * 60 + giay;
    //     int s2 = b.gio * 3600 + b.phut * 60 + b.giay;
    //     return s1 < s2;
    // }

    void in()
    {
        cout << gio << " " << phut << " " << giay << endl;
    }
    friend bool cmp(Time a, Time b);
};

bool cmp(Time a, Time b){
    int s1 = a.gio*3600 + a.phut*60 + a.giay;
    int s2 = b.gio*3600 + b.phut*60 + b.giay;
    return s1 < s2;
}
int main()
{
    int n;
    cin >> n;
    vector<Time> v;
    for (int i = 0; i < n; i++)
    {
        int h, m, s;
        cin >> h >> m >> s;
        Time temp(h, m, s);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        v[i].in();
    }
}