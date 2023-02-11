#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string temp;
    int cnt = 0;

    while (ss >> temp)
    {
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] >= 'A' && temp[i] <= 'Z')
            {
                cnt1++;
            }
            else
                cnt2++;
        }
        if (cnt2 == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}