// Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.

// Input Format

// Số nguyên không âm n

// Constraints

// 0≤n≤10^18

// Output Format

// Số lượng chữ số của n

// Sample Input 0

// 123456789
// Sample Output 0

// 9

#include <iostream>

using namespace std;

int main()
{
    long long n;
    int count = 0;
    cin >> n;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n)
        {
            count++;
            n /= 10;
        }
    }

    cout << count << endl;
}