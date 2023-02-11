// Cho mảng số nguyên A[] gồm N phần tử, tìm khoảng cách nhỏ nhất giữa 2 phần tử a[i], a[j] khác nhau trong mảng(i != j).

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 9
// 8340 4533 1879 7340 1326 1768 357 2015 7779
// Sample Output 0

// 111
#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min_val = INT_MAX;
    int kq;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
             kq = abs((a[i] - a[j]));
            if (min_val >= kq)
            {
                min_val = kq;
            }
        }
    }
    cout << min_val << endl;
}