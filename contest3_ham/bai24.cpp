// Cho số nguyên không âm N, liệt kê các số nguyên tố không vượt quá N.

// Input Format

// Số nguyên N

// Constraints

// 0≤n≤10^7

// Output Format

// In ra các số nguyên tố không vượt quá N trên 1 dòng, các số cách nhau một khoảng trắng.

// Sample Input 0

// 13
// Sample Output 0

// 2 3 5 7 11 13

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

// sang so nguyen to;
int mang[10000001];
void check(int n)
{
    for (int i = 0; i <= n; i++)
    {
        mang[i] = 1;
    }
    mang[0] = mang[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            mang[j] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    check(n);
    for (int i = 0; i <= n; i++)
    {
        if (mang[i] == 1)
        {
            cout << i << " ";
        }
    }
}
