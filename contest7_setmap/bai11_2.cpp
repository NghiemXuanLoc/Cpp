// Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn O(n+m)

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1≤n,m≤10^7; -10^7≤ai≤10^7

// Output Format

// Dòng đầu tiên in ra mảng hợp của 2 mảng Dòng thứ 2 in ra mảng giao của 2 mảng

// Sample Input 0

// 4 5
// 1 2 3 4
// 2 3 5 6 7
// Sample Output 0

// 1 2 3 4 5 6 7
// 2 3

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
    for (auto x : se3)
    {
        cout << x << " ";
    }
    cout << endl;
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
}