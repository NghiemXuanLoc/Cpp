// Cho 4 số a, b, c, d. Hãy kiểm tra xem 4 số này có thể theo thứ tự tạo thành 1 cấp số nhân với công bội nguyên theo đúng thứ tự a, b, c, d hay không?

// Input Format

// 1 dòng chứa 4 số a, b, c, d.

// Constraints

// 1<=a,b,c,d<=10^6

// Output Format

// In ra YES nếu 4 số a, b, c, d tạo thành 1 câp số nhân, ngược lại in ra NO.

// Sample Input 0

// 92 92 92 92
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float x = (float)b / a;
    if ((b * x == c) && (c * x == d))
    {
        cout << "YES";
    }
    else
        cout << "NO";
}