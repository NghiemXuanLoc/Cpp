// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 2<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// In ra số lớn thứ nhất và lớn thứ 2 trong mảng

// Sample Input 0

// 4
// 996817 993012 990914 998837
// Sample Output 0

// 998837 996817

#include <iostream>
#include <math.h>
#include<algorithm>
using ll = long long;
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
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max1 < a[i])
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }
    cout << max1 << " " << max2 << endl;
}