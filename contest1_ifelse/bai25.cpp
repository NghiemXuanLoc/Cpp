// Andrew2804 có rất nhiều tiền :v. Anh ta có n đô la trong ngân hàng. Vì lý do bảo mật, anh ta muốn rút tiền mặt (chúng tôi sẽ không tiết lộ lý do tại đây). Các mệnh giá cho tờ đô la là 1, 5, 10, 20, 100. Số tờ tiền tối thiểu mà Andrew2804 có thể nhận được sau khi rút toàn bộ số dư của mình là bao nhiêu?

// Input Format

// Số nguyên dương n

// Constraints

// 1<=n<=10^9

// Output Format

// In ra số tờ tiền tối thiểu để rút được n đô la

// Sample Input 0

// 3455
// Sample Output 0

// 38

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n/100;
    int y = (n - 100*x) / 20;
    int z = (n - 100*x - 20*y) / 10;
    int t = (n - 100*x - 20*y - 10*z) / 5;
    int h = n - 100*x - 20*y - 10*z - 5*t;
    int kq = x + y + z + t + h;
    cout << kq << endl;
}
