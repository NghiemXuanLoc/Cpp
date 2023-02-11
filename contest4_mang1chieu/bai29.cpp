// Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số 0 đứng đầu thì bạn có thể loại bỏ các số 0 vô nghĩa đó.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤N≤30; 0≤A[i]≤9

// Output Format

// In ra kết quả của bài toán trên 1 dòng.

// Sample Input 0

// 6
// 6 8 4 5 2 3
// Sample Output 0

// 604

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum1 = 0, sum2 = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            sum1 = sum1 * 10 + a[i];
            sum2 = sum2 * 10 + a[i + 1];
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            sum1 = sum1 * 10 + a[i];
            sum2 = sum2 * 10 + a[i + 1];
        }
    }
    
    if (n % 2 == 1)
    {
        sum1 = sum1 * 10 + a[n - 1];
    }
    
    cout << sum1 + sum2 << endl;
    // cout << sum1 << " " << sum2 << endl;
}