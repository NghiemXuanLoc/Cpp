// Cho mảng A[] và B[] có N và M phần tử là các số nguyên, hãy tìm các phần tử xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2.

// Input Format

// Dòng đầu tiên là N và M; Dòng thứ 2 là N số của mảng A[]; Dòng thứ 3 là M số của mảng B[];

// Constraints

// 1<=N, M<=10^6; -10^9<=A[i], B[i] <= 10^9;

// Output Format

// In ra các số xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2 theo thứ tự từ bé đến lớn, mỗi giá trị thỏa mãn chỉ liệt kê 1 lần.

// Sample Input 0

// 3 4
// 1 2 3
// 1 2 4 5
// Sample Output 0

// 3

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    set<int> se1;
    set<int> se2;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se1.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        se2.insert(b[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (se2.find(a[i]) == se2.end())
    //     {
    //         cout << a[i] << " ";
    //         se2.insert(a[i]);
    //     }
    // }
    for (auto x : se1)
    {
        if (se2.count(x) == 0)
        {
            cout << x << " ";
        }
    }
}