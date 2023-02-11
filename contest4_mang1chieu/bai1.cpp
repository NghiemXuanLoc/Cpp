// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^18

// Output Format

// In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số Fibonacci nào thì in ra "NONE".

// Sample Input 0

// 6
// 1597 25358 7318 5878 0 2634
// Sample Output 0

// 1597 0

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham liet ke cac so fibonaci tu 0 toi 92

ll a[93];
bool check1(ll n)
{
    ll f2 = 0, f1 = 1;
    a[0] = 0;
    a[1] = 1;
    if (n == a[0] || n == a[1])
    {
        return true;
    }

    for (int i = 2; i <= 92; i++)
    {
        a[i] = f2 + f1;
        f2 = f1;
        f1 = a[i];
        if (n == a[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    ll mang[n];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> mang[i];
        if (check1(mang[i]))
        {
            cout << mang[i] << " ";
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << "NONE" << endl;
    }
    
}