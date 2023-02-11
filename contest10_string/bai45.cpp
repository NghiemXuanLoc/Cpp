#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[4] = {1, 2, 3, 0};
    int b[4] = {8, 4, 2, 6};
    string temp = "";
    if (s.size() == 1)
    {
        temp += s[0];
    }
    else
    {
        for (int i = s.size() - 2; i < s.size(); i++)
        {
            temp += s[i];
        }
    }

    int res = stoi(temp);
    for (int i = 0; i < 4; i++)
    {
        if (res % 4 == a[i])
        {
            cout << b[i] << endl;
        }
    }
}