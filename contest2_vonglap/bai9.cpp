// //Tính tổng : S=1+1/2+1/3+1/4+….+1/n

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^5

// Output Format

// In ra kết quả lấy độ chính xác 3 số sau dấu phẩy.

// Sample Input 0

// 2
// Sample Output 0

// 1.500

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double kq = (double)1 / i;
        sum += kq;
    }
    cout << fixed << setprecision(3) << sum << endl;
}