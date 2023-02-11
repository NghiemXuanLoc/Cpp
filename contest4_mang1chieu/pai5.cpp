// Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi hành hố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác

// Input Format

// Dòng đầu tiên là số nguyên dương n Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i. Tất cả các xi là khác biệt và theo thứ tự tăng dần.

// Constraints

// 2 ≤ n ≤ 10^6; -10^9 ≤ xi ≤ 10^9

// Output Format

// Đối với mỗi thành phố in ra 2 giá trị mini và maxi trên 1 dòng.

// Sample Input 0

// 4
// -5 -2 2 7
// Sample Output 0

// 3 12
// 3 9
// 4 7
// 5 12

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

// ham tim mini
// xi la so thu tu cua cac thanh pho trong mang

int check(int a[], int n, int xi)
{
    int kq, kq1, kq2;
    if (xi == 0)
    {
        kq = abs((a[xi] - a[xi + 1]));
    }
    else if (xi == n - 1)
    {
        kq = abs((a[xi] - a[xi - 1]));
    }
    else
    {
        kq1 = abs((a[xi] - a[xi + 1]));
        kq2 = abs((a[xi] - a[xi - 1]));
        kq = min(kq1, kq2);
    }

    return kq;
}

// ham tim maxi

int check2(int a[], int n, int xi)
{
    int kq, kq1, kq2;
    if (xi == 0)
    {
        kq = abs((a[xi] - a[n - 1]));
    }
    else if (xi == n - 1)
    {
        kq = abs((a[n - 1] - a[0]));
    }
    else
    {
        kq1 = abs((a[xi] - a[0]));
        kq2 = abs((a[xi] - a[n - 1]));
        kq = max(kq1, kq2);
    }

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

    for (int i = 0; i < n; i++)
    {
        cout << check(a, n, i) << " " << check2(a, n, i) << endl;
    }
}