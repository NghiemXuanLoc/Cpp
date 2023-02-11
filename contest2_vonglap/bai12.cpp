// Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S=2+4+6+8+.....+2*n

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^6

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 4
// Sample Output 0

// 20

#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 2; i <= (2 * n); i += 2)
    {
        sum += i;
    }
    cout << sum << endl;
}