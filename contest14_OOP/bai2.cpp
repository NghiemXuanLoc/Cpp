#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class sinhvien{
    private:
    string ten, ns;
    float m1, m2, m3;
    public:
    void nhap(){
        getline(cin, ten);
        getline(cin, ns);
        cin >> m1 >> m2 >> m3;
    }
    void in(){
        cout << ten << " " << ns << ' ' << fixed << setprecision(1) << m1 + m2 + m3 << endl;
    }
};

int main(){
    sinhvien x;
    x.nhap();
    x.in();
}