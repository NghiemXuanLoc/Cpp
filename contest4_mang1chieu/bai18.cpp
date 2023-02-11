// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

// Output Format

// In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

// Sample Input 0

// 6
// 2 2 1 3 2 3
// Sample Output 0

// 4
// Explanation 0

// Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham de quy tinh to hop chap k cua n phan tu

int check(int n, int k)
{
    return n*(n- 1)/2;
}

int dem[10000001] = {0};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]] > 1)
        {
            sum += check(dem[a[i]], 2);
            dem[a[i]] = 0;
        }
        
    }
    cout << sum << endl;
}