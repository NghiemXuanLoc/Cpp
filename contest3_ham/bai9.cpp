// Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

// Input Format

// Chỉ có một dòng ghi hai số a, b

// Constraints

// 2<=a<=b<=1000

// Output Format

// Các cặp số i,j thỏa mãn được viết lần lượt trên từng dòng theo định dạng (i,j), theo thứ tự từ điển.

// Sample Input 0

// 5 46
// Sample Output 0

// (5,6)
// (5,7)
// (5,8)
// (5,9)
// (5,11)

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;

// ham kiem tra so nguyen to cung nhau

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

// ham tim uoc chung lon nhat giua 2 so a va b

int gcd(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}

void check2(int a, int b)
{
    for (int i = a; i <= b; i++)
    {

        for (int j = i; j <= b; j++)
        {
            if ((gcd(i, j) == 1) && j > i)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    check2(a, b);
}