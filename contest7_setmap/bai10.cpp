// Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác nhau của a và b. Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1≤n,m≤10^6; 0≤ai≤10^7

// Output Format

// Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp của 2 mảng c và d.

// Sample Input 0

// 5 6
// 1 2 1 2 7
// 1 2 3 4 5 6
// Sample Output 0

// 1 2
// 1 2 3 4 5 6 7

#include <iostream>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    set<int> se1, se2, se3;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se1.insert(a[i]);
        se3.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        se2.insert(b[i]);
        se3.insert(b[i]);
    }
    int c = min(se1.size(), se2.size());
    if (c == se1.size())
    {
        for (auto x : se1)
        {
            if (se2.find(x) != se2.end())
            {
                cout << x << " ";
            }
        }
    }
    else
    {
        for (auto x : se2)
        {
            if (se1.find(x) != se1.end())
            {
                cout << x << " ";
            }
        }
    }
    cout << endl;
     for (auto x : se3)
    {
        cout << x << " ";
    }
}