// Tính tích các ước của số tự nhiên N

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤1000

// Output Format

// Tích các ước số của N

// Sample Input 0

// 10
// Sample Output 0

// 100

#include<iostream>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll tich = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tich *= i;
        }
        
    }
    cout << tich << endl;
}