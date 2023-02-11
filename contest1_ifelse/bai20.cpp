// Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b. Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy

// Input Format

// 3 số trên cùng một dòng tương ứng a,b,k

// Constraints

// 1<=a,b,k<=10^9

// Output Format

// Vị trí của con ếch sau k bước nhảy.

// Sample Input 0

// 5 2 3
// Sample Output 0

// 8

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int x = k / 2;
    // vi tri cua con ech sau k buoc nhay le la
    if (k % 2 != 0)
    {
        long long kq1 = 1ll * (x + 1) * a - 1ll * x * b;
        cout << kq1 << endl;
    }
    else // vi tri cua con ech sau k buoc nhay chan la
    {
        long long kq2 = 1ll * x * a - 1ll * x * b;
        cout << kq2 << endl;
    }
}