// Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1. Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau: 1. Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị. 2. Không có hai domino trùng nhau. 3. Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh của bảng. Tìm số lượng domino tối đa thỏa mãn điều kiện trên.

// Input Format

// 2 số nguyên dương M và N.

// Constraints

// 1<=M,N<=10^9

// Output Format

// In ra số thanh domino cần thiết.

// Sample Input 0

// 3 3
// Sample Output 0

// 4
// Sample Input 1

// 2 4
// Sample Output 1

// 4

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    long long kq1 = ceil((double)n/a);
    long long kq2 = ceil ((double)m/a);
    long long kq = 1ll * kq1 * kq2;
    cout << kq << endl;
}