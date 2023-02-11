#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class rectange
{
private:
    double width, height;
    string color;

public:
    rectange();
    rectange(double width, double height, string color)
    {
        this->width = width;
        this->height = height;
        this->color = color;
    }
    double getwidth()
    {
        return this->width;
    }
    void setwidth(double width)
    {
        this->width = width;
    }
    double getheight()
    {
        return this->height;
    }
    void setheight(double height)
    {
        this->height = height;
    }
    string getcolor()
    {
        return this->color;
    }
    void setcolor(string color)
    {
        this->color = color;
    }
    double findarea()
    {
        double a = getwidth();
        double b = getheight();
        return a * b;
    }
    double findperimeter()
    {
        double a = getwidth();
        double b = getheight();
        return (a + b) * 2;
    }
};

string ch(string b)
{
    string a = b;
    a[0] = toupper(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    return a;
}
int main()
{
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;
    rectange x(a, b, s);
    string t = x.getcolor();
    t = ch(t);
    x.setcolor(t);
    double a1 = x.getwidth();
    double a2 = x.getheight();
    if (a < 0 || b < 0)
    {
        cout << "INVALID" << endl;
    }
    else
    {
        cout << x.findperimeter() << " " << x.findarea() << " " << x.getcolor() << endl;
    }
}