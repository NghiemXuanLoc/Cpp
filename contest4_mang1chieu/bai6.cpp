// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau

// Số lượng số nguyên tố trong dãy
// Số lượng số thuận nghịch trong dãy
// Số lượng số chính phương trong dãy
// Số lượng số có tổng chữ số của nó là số nguyên tố.
// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=100; 0<=A[i]<=10000;

// Output Format

// In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên

// Sample Input 0

// 6
// 4 1682 5972 6331 9872 3956
// Sample Output 0

// 0
// 1
// 1
// 4

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham kiem tra so nguyen to

bool check1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

// ham kiem tra so thuan nghich

bool check2(int n)
{
    int temp = n, res = 0;
    while (temp)
    {
        res = (res * 10) + (temp % 10);
        temp /= 10;
    }
    return res == n;
}

// ham kiem tra so chinh phuong

bool check3(int n)
{
    int res = sqrt(n);
    ll kq = 1ll * res * res;
    return kq == n;
}

// tong cac chu so la so nguyen to

bool check4(int n)
{
    int sum = 0;
    while (n)
    {
        int res = n % 10;
        sum += res;
        n /= 10;
    }
    return check1(sum);
}

int main()
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (check1(a[i]))
        {
            c1++;
        }
        if (check2(a[i]))
        {
            c2++;
        }
        if (check3(a[i]))
        {
            c3++;
        }
        if (check4(a[i]))
        {
            c4++;
        }
    }
    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;
}