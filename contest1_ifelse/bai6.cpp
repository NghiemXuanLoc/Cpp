// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32 Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 106, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

// Input Format

// Nhiệt độ ở độ C là một số nguyên không âm.

// Constraints

// 0≤n≤100

// Output Format

// Kết quả đổi từ độ C sang độ F

// Sample Input 0

// 24
// Sample Output 0

// 75.20

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int C;
    cin >> C;
    double F = ((float)C * 9 / 5) + 32;
    cout << fixed << setprecision(2) << F << endl;
}