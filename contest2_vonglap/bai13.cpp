// Nhập vào n nguyên dương không qua 106, tính và in tổng sau ra màn hình. S=1+3+5+7+.....+2*n-1

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^6

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 4
// Sample Output 0

// 16

#include <iostream>

using namespace std;
// cach 1 dung vong lap for
// int main()
// {
//     int n;
//     long long sum = 0;
//     cin >> n;
//     for (int i = 1; i <= 2 * n - 1; i += 2)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
// }

// cach 2 dung vong lap while

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    int i = 1;
    while (i <= 2 * n - 1)
    {
        sum += i;
        i += 2;
    }
    cout << sum << endl;
}
