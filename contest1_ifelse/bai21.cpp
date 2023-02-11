// Neiman muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác n lít nước. Chỉ có hai loại chai nước trong cửa hàng gần đó - chai 1 lít và chai 2 lít. Có vô số chai của hai loại này trong cửa hàng. Chai loại thứ nhất có gía a burles và chai loại thứ hai có giá tương ứng b burles. Polycarp muốn chi càng ít tiền càng tốt. Nhiệm vụ của bạn là tìm ra số tiền tối thiểu (bằng burles) Neimain cần mua chính xác n lít nước ở cửa hàng gần đó nếu chai loại thứ nhất có giá a burles và chai loại thứ hai có giá b burles.

// Input Format

// 3 số n,a,b

// Constraints

// 1<=n<=10^12; 1<=a,b<=1000

// Output Format

// Số tiền ít nhất để mua được n lit nước. Chú ý bạn phải mua chính xác n lít nước, không mua thiếu cũng không mua thừa.

// Sample Input 0

// 10 1 3
// Sample Output 0

// 10

// #include <math.h>
// #include <iostream>

// using namespace std;

// int main()
// {
//     long long n;
//     int a, b;
//     cin >> n >> a >> b;
//     if (a < b)
//     {
//         long long kq1 = n * a;
//         cout << kq1 << endl;
//     }
//     else
//     {
//         if (n % 2 == 0)
//         {
//             long long kq2 = (n / 2) * b;
//             cout << kq2 << endl;
//         }
//         else
//         {
//             long long kq3 = n / 2 * b + a;
//             cout << kq3 << endl;
//         }
//     }
// }

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b;
    long long n;
    cin >> n >> a >> b;
    long long kq1 = n*a;
    long long kq2 = n / 2 * b + n % 2 * a;
    if (kq1 > kq2)
    {
        cout << kq2 << endl;
    }else cout << kq1 << endl;
    
}