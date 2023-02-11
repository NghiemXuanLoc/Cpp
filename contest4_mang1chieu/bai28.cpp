// Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.image

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i] ≤ 10^7

// Output Format

// In ra kết quả của bài toán lấy dư với (10^9 + 7)

// Sample Input 0

// 5
// 5 3 2 4 1
// Sample Output 0

// 40

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

    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_pos] > a[j])
            {
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += 1ll * a[i] * i;
        sum %= 1000000000 + 7;
    }
    cout << sum << endl;
}