// Gần đây Anton tìm thấy một hộp có chữ số trong phòng của mình. Có k2 chữ số 2, k3 chữ số 3, k5 chữ số 5 và k6 chữ số 6. Số nguyên yêu thích của Anton là 32 và 256. Anh quyết định soạn số nguyên này từ các chữ số anh có. Anh ta muốn làm cho tổng của các số nguyên này càng lớn càng tốt. Giúp anh ta giải quyết nhiệm vụ này! Mỗi chữ số có thể được sử dụng không quá một lần, tức là các số nguyên tổng hợp nên chứa không quá k2 chữ số 2, k3 chữ số 3, v.v. Tất nhiên, các chữ số không sử dụng không được tính vào tổng.

// Input Format

// Dòng duy nhất của đầu vào chứa bốn số nguyên k2, k3, k5 và k6 - số chữ số 2, 3, 5 và 6 tương ứng

// Constraints

// 0 ≤ k2, k3, k5, k6 <= 10^9.

// Output Format

// In một số nguyên - tổng số tối đa có thể có của các số nguyên yêu thích của Anton có thể được tạo bằng các chữ số từ hộp.

// Sample Input 0

// 5 1 3 4
// Sample Output 0

// 800

#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int k2, k3, k5, k6, kq2;
    cin >> k2 >> k3 >> k5 >> k6;
    int min = k2;
    if (min > k5)
    {
        min = k5;
    }
    if (min > k6)
    {
        min = k6;
    }
    long long kq1 = 1ll * min * 256;
    if (min == k2)
    {
        k5 = k5 - k2;
        k6 = k6 - k2;
        k2 = 0;
    }
    if (min == k5)
    {
        k2 = k2 - k5;
        k6 = k6 - k5;
        k5 = 0;
    }
    if (min == k6)
    {
        k2 = k2 - k6;
        k5 = k5 - k6;
        k6 = 0;
    }
    if (k3 >= k2)
    {
        kq2 = k2 * 32;
        k3 = k3 - k2;
        k2 = 0;
    }
    if (k2 >= k3)
    {
        kq2 = k3 * 32;
        k2 = k2 - k3;
        k3 = 0;
    }

    long long kq = kq1 + kq2;
    cout << kq << endl;
    cout << k2 << " " << k3 << " " << k5 << " " << k6 << endl;
}