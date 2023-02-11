// Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

// Sample Input 0

// 123456
// Sample Output 0

// 12
// 9

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

int sum = 0;
int sum2 = 0;
int check(ll n)
{
    if (n == 0)
    {
        return sum;
    }
    else
    {
        if (n % 10 % 2 == 0)
        {
            sum += (n % 10);
        }
        return check(n / 10);
    }
}

int check1(ll n)
{
    if (n == 0)
    {
        return sum2;
    }
    else
    {
        if (n % 10 % 2 == 1)
        {
            sum2 += (n % 10);
        }
        return check1(n / 10);
    }
}

int main()
{
    ll n;
    cin >> n;
    cout << check(n) << endl << check1(n) << endl;
}