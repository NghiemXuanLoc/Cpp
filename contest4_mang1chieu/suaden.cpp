// Bài 3. Sửa đèn
// Tuyến đường ven biển của thành phố Highland có N chiếc đèn. Không may cơn bão vừa
// rồi đã làm hỏng B chiếc đèn.
// Để khắc phục sự cố và nhanh chóng khôi phục lại hoạt động du lịch, chính quyền thành
// phố đã quyết định sửa tạm thời một số đèn đường bị hỏng sao cho có ít nhất một khu vực
// có K chiếc đèn liên tiếp hoạt động.
// Các bạn hãy xác định xem số đèn đường cần phải sữa chữa ít nhất là bao nhiêu?
// Input
// Dòng đầu tiên gồm 3 số nguyên dương N, K và B (1 ≤ B, K ≤ N ≤ 100 000).
// B dòng tiếp theo, mỗi dòng chứa vị trí của một chiếc đèn bị hỏng.
// Output
// In ra số đèn đường cần sửa ít nhất sao cho có một khu vực có nhiều hơn hoặc bằng K chiếc
// đèn hoạt động.
// Ví dụ:
// Input Output
// 10 6 5
// 2
// 10
// 1
// 5
// 9

// 1

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int denhong[100001] = {0};

int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    for (int i = 1; i <= b; i++)
    {
        int x;
        cin >> x;
        denhong[x] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        if (denhong[i] == 1)
        {
            cnt++;
        }
    }
    int ans = cnt;
    for (int i = k + 1; i <= n; i++)
    {
        cnt = cnt - denhong[i - k] + denhong[i];
        ans = min(ans, cnt);
    }
    cout << ans << " ";
}