// Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N.

// Input Format

// Số nguyên dương N

// Constraints

// 10≤n≤10^18

// Output Format

// Chữ số lớn nhất và nhỏ nhất của N.

// Sample Input 0

// 1256782
// Sample Output 0

// 8 1

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// kiem tra chu so lon nhat va nho nhat

int check(ll n, int max)
{
    if (n < 10)
    {
        if (max < n)
        {
            max = n;
        }
        return max;
    }
    else
    {
        if (max < n % 10)
        {
            max = n % 10;
        }

        return check(n / 10, max);
    }
}

int check2(ll n, int min)
{
    if (n < 10)
    {
        if (min > n)
        {
            min = n;
        }
        return min;
    }
    else
    {
        if (min > n % 10)
        {
            min = n % 10;
        }

        return check2(n / 10, min);
    }
}

int main()
{
    ll n;
    cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    cout << check(n, max) << " " << check2(n, min) << endl;
}