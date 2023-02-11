// Tại sân bay, mọi người đang làm thủ tục để check in. Có tất cả N vị khách. Vị khách thứ i tới làm thủ tục tại thời điểm T[i] và cần D[i] thời gian để check in xong. Các bạn hãy xác định xem thời điểm nào tất cả các vị khách làm xong thủ tục để lên máy bay?

// Input Format

// Dòng đầu tiên là số nguyên dương N; N dòng tiếp theo, mỗi dòng gồm 2 số nguyên cho biết thời điểm đến của vị khách thứ i và thời gian vị khách này làm xong thủ tục check in. Các giá trị này không vượt quá 10^6.

// Constraints

// 1<=N<=10^5; 1<=T[i], D[i]<=10^6

// Output Format

// In ra đáp án tìm được.

// Sample Input 0

// 3
// 2 1
// 8 3
// 5 7
// Sample Output 0

// 15

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
using ll = long long;

bool cpm(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cpm);
    ll ans = a[0].first + a[0].second;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, 0ll + a[i].first);
        ans += a[i].second;
    }
    cout << ans << endl;
}