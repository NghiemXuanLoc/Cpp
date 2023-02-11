// Cho 2 mảng số nguyên, thực hiện tìm hợp và giao của 2 mảng. Các phần tử trong mỗi mảng khác nhau đôi một.

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1<=n,m<=10^5; -10^6<=a[i]<=10^6;

// Output Format

// Dòng đầu tiên in ra giao của 2 mảng. Dòng thứ 2 in ra hợp của 2 mảng

// Sample Input 0

// 3 5
// 1 2 3
// 1 2 9 5 3
// Sample Output 0

// 1 2 3
// 1 2 3 5 9

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> hop;
    map<int, int> giao;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hop.insert(x);
        giao[x] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        hop.insert(x);
        if (giao[x] == 1)
        {
            giao[x] = 2;
        }
    }
    for (auto x : giao)
    {
        if (x.second == 2)
        {
            cout << x.first << " ";
        }
    }
    cout << endl;
    for (auto x : hop)
    {
        cout << x << " ";
    }
}