// Tính tổng : S = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^6

// Output Format

// Kết quả S(n) lấy độ chính xác 5 số sau dấu phẩy.

// Sample Input 0

// 993856
// Sample Output 0

// 7.19328

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
       sum += (double)1 / (2 * i);
    }
    cout << fixed << setprecision(5) <<  sum << endl;
}