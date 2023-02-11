#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <vector>
using namespace std;

class game
{
private:
    string tk, mk, ten, vao, ra;

public:
    game(string tk, string mk, string ten, string vao, string ra)
    {
        this->tk = tk;
        this->mk = mk;
        this->ten = ten;
        this->vao = vao;
        this->ra = ra;
    }
    int giochoi()
    {
        string temp = "";
        string res = "";
        int batdau = 0, ketthuc = 0;
        int i = 0;
        while (this->vao[i] != ':')
        {
            temp += this->vao[i++];
        }
        i++;
        batdau = stoi(temp);
        batdau *= 60;

        temp = "";
        while (i < this->vao.size())
        {
            temp += this->vao[i++];
        }
        batdau += stoi(temp);

        int j = 0;
        while (this->ra[j] != ':')
        {
            res += this->ra[j++];
        }
        j++;
        ketthuc = stoi(res);
        ketthuc *= 60;
        res = "";
        while (j < this->ra.size())
        {
            res += this->ra[j++];
        }
        ketthuc += stoi(res);
        return ketthuc - batdau;
    }

    string gettk()
    {
        return tk;
    }

    void tostring()
    {
        int tong = giochoi();
        int gio = tong / 60;
        int phut = tong % 60;
        cout << tk << " " << mk << " " << ten << " " << gio << " "
             << "gio"
             << " " << phut << " "
             << "phut" << endl;
    }
};

bool cpm(game a, game b)
{
    if (a.giochoi() != b.giochoi())
    {
        return a.giochoi() > b.giochoi();
    }
    else
        return a.gettk() < b.gettk();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<game> v;

    for (int i = 0; i < n; i++)
    {
        string vao, ra, tk, mk, ten;
        getline(cin, tk);
        getline(cin, mk);
        getline(cin, ten);
        getline(cin, vao);
        getline(cin, ra);
        game x(tk, mk, ten, vao, ra);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        x.tostring();
    }
}