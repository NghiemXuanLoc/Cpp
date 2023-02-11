// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]. Dòng tiếp theo là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

// Output Format

// In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

// Sample Input 0

// 5
// 1 2 3 4 5
// 1
// 1 3
// Sample Output 0

// 6

#include <iostream>

using namespace std;
using ll = long long;

// su dung mang cong don de tinh
int mang[10000000];

void check(int a[], int n)
{
    mang[1] = a[1];
    mang[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        mang[i] += (mang[i - 1] + a[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    check(a, n);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << mang[r] - mang[l - 1] << endl;
    }
}
