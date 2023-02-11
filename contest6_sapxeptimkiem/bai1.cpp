// Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt

// Input Format

// Dòng đầu tiên là N Dòng thứ 2 là các phần tử trong mảng a1, a2, ... aN

// Constraints

// 1≤n≤2.10^5 1≤ai≤10^9

// Output Format

// In ra số lượng phần tử riêng biệt trong mảng.

// Sample Input 0

// 10
// 2 2 2 1 3 2 5 1 4 2
// Sample Output 0

// 5

#include <iostream>
#include <algorithm>

using namespace std;

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
    int dem = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            dem++;
        }
    }
    cout << dem << endl;
}
