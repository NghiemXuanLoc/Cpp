// Nhập n không âm không quá 15, tính và in ra n!

// Input Format

// Số nguyên không âm n

// Constraints

// 1≤n≤15

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 5
// Sample Output 0

// 120

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    long long kq = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        kq *= i;
    }
    cout << kq << endl;
}