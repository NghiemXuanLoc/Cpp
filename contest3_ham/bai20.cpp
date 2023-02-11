// Viết chương trình C cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^7

// Output Format

// Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.

// Sample Input 0

// 200
// Sample Output 0

// 2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89 101 103 107 109 113 127 137 139 149 157 167 179 199
// 29

// liet ke so nguyen to nho hon n
// kiem tra chu so tan cung xem co phai lon nhat hay khong

#include <iostream>
#include <math.h>

using namespace std;

// kiem tra 1 chu so co phai la chu so nguyen to hay khong

bool check1(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

// ham kiem tra chu so cuoi cung la lon nhat

bool check2(int n)
{
    int temp = n % 10;
    while (n)
    {
        n /= 10;
        int res = n % 10;
        if (temp < res)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (check1(i) && check2(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl
         << cnt << endl;
}
