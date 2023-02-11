// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^8.

// Output Format

// In ra YES nếu N là số Smith, ngược lại in ra NO.

// Sample Input 0

// 22
// Sample Output 0

// YES

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

int check2(int n)
{
    int sum2 = 0;
    while (n)
    {
        int res = n % 10;
        sum2 += res;
        n /= 10;
    }
    return sum2;
}

// ham tinh tong cac thua so nt khi phan tich
int check3(int n)
{
    int sum1 = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
               sum1 += check2(i);
               n /= i;
            }
        }
    }
    if (n != 1)
    {
        sum1 += check2(n);
    }
    return sum1;
}

// ham kiem tra tong chu so cua n

int main()
{
    int n;
    cin >> n;
    if (check1(n) == false && check2(n) == check3(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}