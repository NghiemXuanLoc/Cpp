// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch. Ví dụ: các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

// Input Format

// Số nguyên dương n

// Constraints

// 99≤n≤10^18

// Output Format

// Ghi ra YES tương ứng với số đẹp, NO trong trường hợp ngược lại

// Sample Input 0

// 122222
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham kiem tra chu so dau tien va chu so cuoi cung
bool check1(ll n)
{
    ll res = n % 10;
    ll temp;
    while (n)
    {
        temp = n % 10;
        n /= 10;
    }
    return ((res * 2 == temp) || (temp * 2 == res));
}

// ham kiem tra chu so thuan nghich

bool check2(ll n)
{
    n /= 10;
    ll res = 0;
    while (n >= 10)
    {
        res = (res * 10) + (n % 10);
        n /= 10;
    }
    ll temp = res;
    ll temp1 = 0;
    while (temp)
    {
        temp1 = (temp1 * 10) + (temp % 10);
        temp /= 10;
    }
    return temp1 == res;
}
int main()
{
    ll n;
    cin >> n;
    if (check1(n) && check2(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}