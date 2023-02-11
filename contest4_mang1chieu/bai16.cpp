// Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

// Input Format

// Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9

// Output Format

// In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

// Sample Input 0

// 3
// 3 4 5
// Sample Output 0

// YES

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;

ll check(int b, int c)
{
    ll kq1 = 1ll * pow(b, 2);
    ll kq2 = 1ll * pow(c, 2);
    ll kq = kq1 + kq2;
    return kq;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        ll kq = 1ll * a[i] * a[i];
        for (int j = i + 2; j < n; j++)
        {
            ll temp = check(a[i + 1], a[j]);
            if (kq == temp)
            {
                dem++;
                break;
            }
            cout << kq << " " << temp << endl;
            //cout << check(a[i], a[j]) << " ";
        }
        cout << endl;
        //cout << kq << " ";
    }
    if (dem > 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    //cout << check(13, 12) << endl;
}