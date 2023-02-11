// Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S=1^3+2^3+3^3+4^3+……+n^3.

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^3

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 3
// Sample Output 0

// 36

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        long long temp = pow(i, 3);
        sum += temp;
    }
    cout << sum << endl;
}
