// Tính tổng S(n) = 1 + 2 + 3 + ... + n

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^6

// Output Format

// Kết quả S(n)

// Sample Input 0

// 6
// Sample Output 0

// 21

#include<iostream>

using namespace std;

int main(){
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}