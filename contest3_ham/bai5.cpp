// In ra các số chính phương trong đoạn từ a tới b. Bài này bạn nào cde bằng java thì có thể bỏ qua vì test lớn quá Java không chạy xong trong 8s.

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^12

// Output Format

// In ra các số chính phương trong đoạn giữa 2 số a, b trên một dong. Các số cách nhau một khoảng trắng.

// Sample Input 0

// 10 20
// Sample Output 0

// 16

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// in ra cac so chinh phuong

void check(ll a, ll b)
{
    if (a)
    {
        for (int i = sqrt(a); i <= sqrt(b); i++)
        {

            if (1ll * i * i >= a)
            {
                cout << 1ll * i * i << " ";
            }
        }
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    check(a, b);
}