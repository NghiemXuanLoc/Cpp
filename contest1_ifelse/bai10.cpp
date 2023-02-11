// Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?

// Input Format

// 1 dòng chứa 3 số a, b, c.

// Constraints

// -10^6<=a,b,c<=10^6

// Output Format

// In ra YES nếu a, b, c là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra NO.

// Sample Input 0

// 3 4 5
// Sample Output 0

// YES

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "YES";
    }else cout << "NO";
}