// Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// Dòng đầu tiên in ra tổng các phần tử trong mảng chia dư với 10^9 + 7; Dòng thứ hai in ra tích các phần tử trong mảng chia dư với 10^9 +7;

// Sample Input 0

// 6
// 997893 995053 997553 996212 998316 992144
// Sample Output 0

// 5977171
// 436766709

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0, tich = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        tich *= a[i];
        sum %= 1000000007;
        tich %= 1000000007;
    }
    cout << sum << endl;
    cout << tich << endl;
}