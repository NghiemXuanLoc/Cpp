// Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây: 1. Lấy N chia cho 2 nếu N chia hết cho 2. 2. Lấy N chia hết cho 3 nếu N chia hết cho 3. 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.

// Input Format

// Số nguyên dương N.

// Constraints

// 1≤n≤50

// Output Format

// In ra số thao tác tối thiểu cần thực hiện.

// Sample Input 0

// 38
// Sample Output 0

// 5

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int cnt = 0;

int check(int &n)
{
    if (n == 1)
    {
        return cnt;
    }
    else
    {
        if (n % 3 == 0)
        {
            cnt++;
            n /= 3;
        }
        else if (n % 2 == 0)
        {
            cnt++;
            n /= 2;
        }
        else
        {
            cnt++;
            n -= 1;
        }
        return check(n);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
    cout << n << endl;
}