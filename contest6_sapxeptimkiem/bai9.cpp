// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

// Constraints

// 1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

// Output Format

// Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 5
// 5 4 3 2 1
// 2
// 2
// 8
// Sample Output 0

// YES
// NO

#include <iostream>
#include <algorithm>

using namespace std;

// cach lam thong thuong

// bool nhiphan(int a[], int n, int x)
// {
//     int l = 0, r = n - 1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (x == a[m])
//         {
//             return true;
//         }
//         else if (a[m] < x)
//         {
//             l = m + 1;
//         }
//         else
//             r = m - 1;
//     }
//     return false;
// }

// cach lam bang de quy

bool dequy(int a[], int x, int l, int r)
{
    if (l > r)
    {
        return false;
    }
    int m = (l + r) / 2;
    if (a[m] == x)
    {
        return true;
    }
    else if (x > a[m])
    {
        return dequy(a, x, l, m - 1);
    }
    else
        return dequy(a, x, m + 1, r);
}
int main()
{
    int n, q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //sort(a, a + n);
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (dequy(a, x, 0, n - 1))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}