// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 12
// 994626 994448 996097 995790 999692 993222 991401 999038 997163 990016 993004 990549
// Sample Output 0

// 1

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

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

int main()
{
    int n, min1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min1 = a[0];
    for (int i = 1; i < n; i++)
    {
        min1 = gcd(min1, a[i]);
    }
    cout << min1 << endl;
}