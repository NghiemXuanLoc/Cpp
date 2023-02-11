// Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n, chia hết cho 3.

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^6

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 10
// Sample Output 0

// 18

#include<iostream>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n; ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        
    }
    cout << sum << endl; 
}