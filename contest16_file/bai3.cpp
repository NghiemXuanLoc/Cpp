#include <iostream>
#include <vector>
#include <fstream>
#include<ctype.h>

using namespace std;

int main()
{
    ofstream out;
    ifstream in;
    in.open("binhluan.txt");
    out.open("sdt.txt");
    if (in.is_open())
    {
        string sdt;
        while (getline(in, sdt))
        {
            string temp = "";
            for (int i = 0; i < sdt.size(); i++)
            {
                int ok;
                int dt1 = 8, dt2 = 9;
                if (sdt[i] == '0' && (isdigit(sdt[i + dt1]) || isdigit(sdt[i + dt2])))
                {
                    int cnt = 0;
                    if (isdigit(sdt[i + dt2]))
                    {
                        ok = 10;
                    }
                    else
                    {
                        ok = 9;
                    }
                    while (ok--)
                    {
                        temp += sdt[i + cnt];
                        cnt++;
                    }
                }
            }
            if (temp != "")
            {
                out << temp << endl;
            }
        }
    }
}