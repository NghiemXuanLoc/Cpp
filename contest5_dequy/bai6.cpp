// Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤15;

// Output Format

// In ra số Fibonacci thứ n.

// Sample Input 0

// 1
// Sample Output 0

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// viet ham de quy tinh so fibonaci

ll s(int k)
{
    if (k == 1)
    {
        return 0;
    }
    else if (k == 2)
    {
        return 1;
    }
    return s(k - 1) + s(k - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << s(n) << endl;
}