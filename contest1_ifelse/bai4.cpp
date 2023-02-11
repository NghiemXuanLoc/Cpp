// Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy PI = 3.14

// Input Format

// 1 dòng chứa bán kính R là số nguyên dương.

// Constraints

// 1≤R≤1000

// Output Format

// In ra chu vi và diện tích trên 1 dòng, kết quả lấy độ chính xác 4 số sau dấu phẩy.

// Sample Input 0

// 10
// Sample Output 0

// 62.8000 314.0000

#include<iostream>
#include<math.h>
#include<iomanip>

using  namespace std;

int main(){
    int r;
    cin >> r;
    double chuvi = 2 * 3.14 * r;
    double dientich = 3.14 * r * r;
    cout << fixed << setprecision(4) << chuvi << " " << fixed << setprecision(4) << dientich << endl;
}