// Doremon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc 2 bước mỗi lần di chuyển. Doremon muốn số lần di chuyển là bội số của một số nguyên m. Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều kiện của anh ta là gì?

// Input Format

// Dòng đơn chứa hai số nguyên cách nhau n, m

// Constraints

// 1<=n,m<=10^9

// Output Format

// In một số nguyên duy nhất - số lượng di chuyển tối thiểu là bội số của m. Nếu không có cách nào anh ta có thể leo lên thỏa mãn điều kiện in - 1.

// Sample Input 0

// 10 2
// Sample Output 0

// 6
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, m, kq1;
    cin >> n >> m;
    int x = ceil((float)n / 2); // so buoc toi thieu truong hop n chan
    kq1 = 1ll*(x + m - 1) / m * m;
    if ((kq1 >= x || kq1 >= x + 1) && kq1 <= n && kq1 != 0)
    {
        cout << kq1 << endl;
    }
    else
        cout << "-1";
}
