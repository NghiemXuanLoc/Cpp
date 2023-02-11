// Nhập vào n, tính tổng các chữ số của n, và in ra kết quả

// Input Format

// Số nguyên không âm n

// Constraints

// 0≤n≤10^18

// Output Format

// Tổng chữ số của n

// Sample Input 0

// 12341
// Sample Output 0

// 11

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int sum = 0;
    if (n == 0)
    {
       sum = 0;
    }
    else
    {
        while (n)
        {
            int temp = n % 10;
            sum += temp;
            n /= 10;
        }
        
    }
    cout << sum << endl;
}