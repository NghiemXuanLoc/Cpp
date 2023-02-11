// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không.

// Sample Input 0

// 999923001838986077
// Sample Output 0

// 1
// Sample Input 1

// 30
// Sample Output 1

// 1

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// so sphenic

bool check(ll n)
{
    int dem = 0, tam = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                tam++;
                n /= i;
            }
            dem++;
        }
    }
    if (n != 1)
    {
        dem++; tam++;
    }
    
    if (dem == 3 && tam == 3)
    {
        return true;
    }
    else
        return false;
}

int main(){
    ll n;
    cin >> n;
    cout << check(n) << endl;
}