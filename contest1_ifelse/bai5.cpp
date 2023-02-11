// Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, Euclid, Minkowski. Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều nhất là khoảng cách Euclid. Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy

// Input Format

// Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên

// Constraints

// -10^6≤xi,yi≤10^6

// Output Format

// In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.

// Sample Input 0
// 1 4 4 8
// Sample Output 0

// 5.00

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double A = pow((x2 - x1), 2), B = pow((y2 - y1), 2);
    double C = sqrt((A + B));
    cout << fixed << setprecision(2) << C << endl;
}