// Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

// Input Format

// 2 số n,k

// Constraints

// 1 ≤n,k≤10^9

// Output Format

// In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.

// Sample Input 0

// 28 3
// Sample Output 0

// 7
// Sample Input 1

// 8 5
// Sample Output 1

// -1

#include <iostream>
#include <math.h>

using namespace std;

// so nguyen to thu k trong phan tich so nt n

void check(int n, int k)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                if (k == cnt)
                {
                    cout << i << endl;
                }

                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt++;
    }
    if (k == cnt)
    {
        cout << n << endl;
    }
    else if (k > cnt)
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    check(n, k);
}