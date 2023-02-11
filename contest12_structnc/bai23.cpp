// #include <iostream>
// #include <string>
// #include <iomanip>
// #include <algorithm>
// #include <sstream>
// #include <ctype.h>

// using namespace std;

// struct sv
// {
//     string msv, ten, ns, lop;
//     float gpa;

//     void nhap()
//     {
//         getline(cin, ten);
//         getline(cin, lop);
//         getline(cin, ns);
//         cin >> gpa;
//     }
// };

// void ch(string &s)
// {
//     if (s[1] == '/')
//     {
//         s.insert(0, "0");
//     }
//     if (s[4] == '/')
//     {
//         s.insert(3, "0");
//     }
// }

// string a[100];
// int cnt = 0;

// void tach(string s)
// {
//     stringstream ss(s);
//     string temp = "";
//     while (ss >> temp)
//     {
//         a[cnt++] = temp;
//     }
// }

// void vt(string &s)
// {
//     for (int i = 0; i < cnt; i++)
//     {
//         for (int j = 0; j < a[i].size(); j++)
//         {
//             a[i][j] = tolower(a[i][j]);
//         }
//     }
// }
// void ch2(string &s)
// {
//     string t = "";
//     int cnt = 0;
//     for (int i = 0; i < cnt; i++)
//     {
//         a[i][0] = toupper(a[i][0]);
//     }
//     s = t;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     sv a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin.ignore();
//         a[i].nhap();
//         ch(a[i].ns);
//         tach(a[i].ten);
//         // vt(a[i].ten);
//         ch2(a[i].ten);
//         a[i].msv = "SV";
//         string t = to_string(i + 1);
//         while (a[i].msv.size() < 5 - t.size())
//         {
//             a[i].msv += "0";
//         }
//         a[i].msv += t;
//         cnt = 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].msv << " " << a[i].ten << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
//     }
// }

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <ctype.h>

using namespace std;

struct sv
{
    string msv, ten, ns, lop;
    float gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ns);
        cin >> gpa;
    }
};

void ch(string &s)
{
    if (s[1] == '/')
    {
        s.insert(0, "0");
    }
    if (s[4] == '/')
    {
        s.insert(3, "0");
    }
}

string a[100];
int cnt = 0;

void tach(string s)
{
    stringstream ss(s);
    string temp = "";
    while (ss >> temp)
    {
        a[cnt++] = temp;
    }
}
void vt(string &s)
{
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            a[i][j] = tolower(a[i][j]);
        }
    }
}

void ch2(string &s)
{
    string t = "";
    for (int i = 0; i < cnt; i++)
    {
        a[i][0] = toupper(a[i][0]);
        t += a[i];
        t += " ";
    }
    s = t;
}
int main()
{
    int n;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].nhap();
        ch(a[i].ns);
        tach(a[i].ten);
        vt(a[i].ten);
        ch2(a[i].ten);
        a[i].msv = "SV";
        string t = to_string(i + 1);
        while (a[i].msv.size() < 5 - t.size())
        {
            a[i].msv += "0";
        }
        a[i].msv += t;
        cnt = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].msv << " " << a[i].ten << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}