// Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các bạn không được dùng vòng lặp.

// Input Format

// 1 dòng chứa 2 số a, b.

// Constraints

// 1<=a,b<=10^6

// Output Format

// Dòng đầu tiên in ra số thứ 1 cần tìm. Dòng thứ 2 in ra số thứ 2 cần tìm.

// Sample Input 0

// 717 689
// Sample Output 0

// 689
// 1378

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // tim x(max) <= a ma chia het cho b
    int n = a / b;
    int xmax = b * n;
    cout << xmax << endl;
    // tim x(min) >= a ma chia het cho b
    int xmin;
    if (a % b != 0)
    {
        xmin = (n + 1) * b;
        cout << xmin << endl;
    }
    else
    {
        xmin = b * n;
        cout << xmin << endl;
    }
}