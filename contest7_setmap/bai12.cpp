// Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.

// Input Format

// Dòng đầu tiên là N - số lượng phần tử của mảng; Dòng thứ 2 gồm N phần tử A[i] của mảng; Dòng thứ 3 là số truy vấn Q; Q dòng tiếp theo mỗi dòng là một số L.

// Constraints

// 1<=N<=1000000; 1<=A[i]<=10^9; 1<=Q<=10000; 0<=L<=N-1;

// Output Format

// Với mỗi truy vấn in kết quả trên 1 dòng.

// Sample Input 0

// 9
// 3 3 3 4 2 0 3 1 2
// 4
// 8
// 6
// 1
// 7
// Sample Output 0

// 1
// 3
// 5
// 2

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> se;
    int n;
    cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; --i)
    {
        se.insert(a[i]);
        f[i] = se.size();
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l;
        cin >> l;
        cout << f[l] << endl;
    }
}