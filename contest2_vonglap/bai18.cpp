// Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.

// Input Format

// Số nguyên không âm n

// Constraints

// 0≤n≤10^18

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 1222333999888
// Sample Output 0

// 6

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;

    while (n)
    {
        int temp = n % 10;
        if (temp == 2 || temp == 3 || temp == 5 || temp == 7)
        {
            count++;
        }
        n /= 10;
    }

    cout << count << endl;
}